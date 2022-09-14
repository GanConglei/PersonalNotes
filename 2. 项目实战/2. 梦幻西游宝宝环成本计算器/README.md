## 软件开发记录

### 前言

​	之前在学习MCU RTOS的过程中一直想学习一款GUI开发软件，可以将自己想要的信息通过可视化界面的方式显示出来，这就非常的炫酷 :+1:，所以当时学习了emWin, ToughGFX, LittleVGL。但是在学习中发现基于嵌入式的GUI开发软件存在一定的弊端，比如软件移植代码量大，没有图形化的设计界面，不容易上手。作为GUI轻度使用用户，去花时间学习这些GUI框架，确实是费时又费力。但现在需要可视化调试的场景越来越多，所以急需一款容易上手，轻度代码编写，具有图形化设计的桌面开发工具。众里寻他千百度，在众多开发平台中选择了QT开发。

​	上个仓库使用QT实现了串口的收发，本着学玩结合的精神，再次基于QT实现一款梦幻西游(我的初恋:heart:)的宝宝环成本计算器。既能够锻炼了QT的开发能力，也能统计平时玩梦幻跑环的成本，两全其美，美滋滋~~~

​	接下来，看我表演。

### UI界面设计

- 在 `PushButton` 中添加图标 `icon` 时发现，在页面布局的时候图标能够显示出来，但是运行之后图标就没有了，如图：

    <img src="image/image-20220909101731443.png" alt="image-20220909101731443" style="zoom:50%;" />

    <img src="image/image-20220909101851197.png" alt="image-20220909101851197" style="zoom:50%;" />

    作为有界面洁癖的同学，这种情况怎么能忍，在度娘的帮助下，顺利解决问题。

    添加 `icon` 时不能够使用 `选择文件` ，而是使用 `选择资源`，但是在点击 `选择资源` 发现时空的，沃日~~~

    ![image-20220909102157345](image/image-20220909102157345.png)

    继续找度娘，原来需要对项目进行外部资源添加，具体实现步骤如下：

    1. 新建一个 `Qt Resource File ` ,命名并添加到工程之中；

        <img src="image/image-20220909102440649.png" alt="image-20220909102440649" style="zoom:80%;" />

    	<img src="image/image-20220909102630993.png" alt="image-20220909102630993" style="zoom: 80%;" />

    2. 前缀命A名为 `image` ，点击 `Add Prefix` ，用来保存文件；

    	<img src="image/image-20220909103315603.png" alt="image-20220909103315603" style="zoom:80%;" />

    3. 点击 `Add Files` 选择相应的图片，完成图片添加；

    	![image-20220909103435040](image/image-20220909103435040.png)

    4. 在点开 `选择资源` 后，图标就出现了，NICE~~~

    	![image-20220909104753025](image/image-20220909104753025.png)

- 如何在空白区域添加图片

    - 安装上述方式将图片添加到资源库；

    - 添加个 `Label` 标签，删除文字，在 `pixmap` 中选择图片，调整好大小；

        ![image-20220909105702655](image/image-20220909105702655.png)

- 添加第二(设置)菜单界面

    1. 添加一个 `Dialog` 界面；

        <img src="image/image-20220909111045397.png" alt="image-20220909111045397" style="zoom:80%;" />

        <img src="image/image-20220909111112005.png" alt="image-20220909111112005" style="zoom:80%;" />

        <img src="image/image-20220909111152345.png" alt="image-20220909111152345" style="zoom:80%;" />

    2. 在主界面头文件中申明 `#include "settingdialog.h"` 并定义 添加定义 `SettingDialog settingDialog;`;

        <img src="image/image-20220909114915517.png" alt="image-20220909114915517" style="zoom:80%;" />

    3. 在按键槽函数中开启第二菜单界面；

        ```c
        void Dialog::on_pushButtonSetting_clicked()
        {
            settingDialog.show();
        }
        ```


### 软件设计

- 显示定时器设置

    - 创建一个定时，用来显示一些变量信息；

        ```c
        QTimer *DisTimer = new QTimer(this); //创建定时器，用于刷新显示
        ```

    - 设置连接函数，将信号发送者（sender）对象中的信号（signal）与接受者（receiver）中的（slot）槽函数联系起来;

        ```c
        //设置信号和槽
        connect(DisTimer, SIGNAL(timeout()), this, SLOT(on_DisplayUpdate()));
        ```

    - 启动定时器，并设置定时时间，单位ms;

        ```c
        //启动定时器
        DisTimer->start(100);
        ```

    - 在槽函数 `on_DisplayUpdate()` 中进行显示操作；

- `int`  型转换成 `Qtring` ；

    ```c
    int i = 5;
     
    QString s = QString::number(i);
    ```

- 获取 `lineEdit` 中的字符并转换成 `int` 型；

    ```c
    int a = ui->lineEdit->text().toInt();
    ```

    `ui->lineEdit->text()` 返回的是 `QSting` 型的数据，需要进行一个类型转换。

- `QDataStream` 简单读写操作

    软件需要保存一些数据，以防下次使用时重复配置。`QDataStream` 类可以将任意的常用类型的数据以二进制的方式写入 `QFile` 指定的磁盘文件中，同时也可以按照写入的顺序依次读出数据。

    - 写入数据

        ```c
        #define file "config.txt"
        //获取数据
        Variety.WeaEqu.weapon_60.price = ui->lineEditWeapon_60->text().toInt();
        Variety.WeaEqu.equipment_60.price = ui->lineEditEquipment_60->text().toInt();
        Variety.WeaEqu.weapon_70.price = ui->lineEditWeapon_70->text().toInt();
        Variety.WeaEqu.equipment_70.price = ui->lineEditEquipment_70->text().toInt();
        Variety.WeaEqu.weapon_80.price = ui->lineEditWeapon_80->text().toInt();
        Variety.WeaEqu.equipment_80.price = ui->lineEditEquipment_80->text().toInt();
        Variety.Skill.firFruniture.price = ui->lineEditFirFruniture->text().toInt();
        Variety.Skill.secFruniture.price = ui->lineEditSecFruniture->text().toInt();
        Variety.Skill.drug.price = ui->lineEditDrug->text().toInt();
        Variety.Skill.cooking.price =  ui->lineEditCooking->text().toInt();
        Variety.Music.desolate.price = 1000;
        Variety.Music.cymbals.price = 1000;
        Variety.Music.woodblock.price = ui->lineEditWoodblock->text().toInt();
        Variety.Music.harp.price = ui->lineEditHarp->text().toInt();
        Variety.Music.pipa.price = ui->lineEditPipa->text().toInt();
        Variety.Music.suona.price = ui->lineEditSuona->text().toInt();
        Variety.Music.flute.price = ui->lineEditFlute->text().toInt();
        Variety.Music.chime.price = ui->lineEditChime->text().toInt();
        Variety.Flower.peony.price = ui->lineEditPeony->text().toInt();
        Variety.Flower.rose.price = ui->lineEditRose->text().toInt();
        Variety.Flower.carnation.price = ui->lineEditCarnation->text().toInt();
        Variety.Flower.lily.price = ui->lineEditLily->text().toInt();
        
        QFile filesrc(file);
        filesrc.open(QIODevice::WriteOnly);
        QDataStream out(&filesrc);
        out << Variety.WeaEqu.weapon_60.price << Variety.WeaEqu.equipment_60.price
            << Variety.WeaEqu.weapon_70.price << Variety.WeaEqu.equipment_70.price
            << Variety.WeaEqu.weapon_80.price << Variety.WeaEqu.equipment_80.price
            << Variety.Skill.firFruniture.price << Variety.Skill.secFruniture.price
            << Variety.Skill.drug.price << Variety.Skill.cooking.price
            << Variety.Music.desolate.price << Variety.Music.cymbals.price
            << Variety.Music.woodblock.price << Variety.Music.harp.price
            << Variety.Music.pipa.price << Variety.Music.suona.price
            << Variety.Music.flute.price << Variety.Music.chime.price
            << Variety.Flower.rose.price << Variety.Flower.lily.price
            << Variety.Flower.carnation.price << Variety.Flower.peony.price; //写入数据
        filesrc.flush();
        filesrc.close();
        ```

    - 读出数据

        ```c
        //判断是否存在config文件，如果不存在则创建config文件
        if(QFile::exists(file))
        {
            QFile filenew(file);
            filenew.open(QIODevice::ReadOnly);
            QDataStream in(&filenew); // 从文件读取序列化数据
            in >> Variety.WeaEqu.weapon_60.price >> Variety.WeaEqu.equipment_60.price
                    >> Variety.WeaEqu.weapon_70.price >> Variety.WeaEqu.equipment_70.price
                    >> Variety.WeaEqu.weapon_80.price >> Variety.WeaEqu.equipment_80.price
                    >> Variety.Skill.firFruniture.price >> Variety.Skill.secFruniture.price
                    >> Variety.Skill.drug.price >> Variety.Skill.cooking.price
                    >> Variety.Music.desolate.price >> Variety.Music.cymbals.price
                    >> Variety.Music.woodblock.price >> Variety.Music.harp.price
                    >> Variety.Music.pipa.price >> Variety.Music.suona.price
                    >> Variety.Music.flute.price >> Variety.Music.chime.price
                    >> Variety.Flower.rose.price >> Variety.Flower.lily.price
                    >> Variety.Flower.carnation.price >> Variety.Flower.peony.price; //提取写入的数据
            filenew.close();
            //设置界面值
            ui->lineEditWeapon_60->setText(QString::number(Variety.WeaEqu.weapon_60.price));
            ui->lineEditEquipment_60->setText(QString::number(Variety.WeaEqu.equipment_60.price));
            ui->lineEditWeapon_70->setText(QString::number(Variety.WeaEqu.weapon_70.price));
            ui->lineEditEquipment_70->setText(QString::number(Variety.WeaEqu.equipment_70.price));
            ui->lineEditWeapon_80->setText(QString::number(Variety.WeaEqu.weapon_80.price));
            ui->lineEditEquipment_80->setText(QString::number(Variety.WeaEqu.equipment_80.price));
            ui->lineEditFirFruniture->setText(QString::number(Variety.Skill.firFruniture.price));
            ui->lineEditSecFruniture->setText(QString::number(Variety.Skill.secFruniture.price));
            ui->lineEditDrug->setText(QString::number(Variety.Skill.drug.price));
            ui->lineEditCooking->setText(QString::number(Variety.Skill.cooking.price));
            ui->lineEditWoodblock->setText(QString::number(Variety.Music.woodblock.price));
            ui->lineEditHarp->setText(QString::number(Variety.Music.harp.price));
            ui->lineEditPipa->setText(QString::number(Variety.Music.pipa.price));
            ui->lineEditSuona->setText(QString::number(Variety.Music.suona.price));
            ui->lineEditFlute->setText(QString::number(Variety.Music.flute.price));
            ui->lineEditChime->setText(QString::number(Variety.Music.chime.price));
            ui->lineEditPeony->setText(QString::number(Variety.Flower.peony.price));
            ui->lineEditRose->setText(QString::number(Variety.Flower.rose.price));
            ui->lineEditCarnation->setText(QString::number(Variety.Flower.carnation.price));
            ui->lineEditLily->setText(QString::number(Variety.Flower.lily.price));
        }
        ```

### 软件LOGO

1. 准备一个ico文件，可以将png图片转换成ico图标，图标大小可以设置成128x128。可以在[图标在线转换网站](https://www.aconvert.com/cn/icon/png-to-ico/)进行在线转换。转换完毕将xxx.ico图标文件放到与.pro同一个目录下；

    <img src="image/image-20220914141221137.png" alt="image-20220914141221137" style="zoom: 80%;" />

2. 在.pro文件中添加一行代码；

    ```c
    RC_ICONS = chess.ico  //chess.ico为所需要设置的图标
    ```

3. 重新编译依次；

### 软件打包

软件调试成功后，需要进行打包工作。

1. 前期准备，下载Enigma virtual box工具，官方链接：https://enigmaprotector.com/en/downloads.html

    选择第3个，安装过程全程无尿点，略过。

​	<img src="image/image-20220914112816863.png" alt="image-20220914112816863" style="zoom:50%;" />

2. 使用Release编译，在工程目录下会生成一个带 `Release` 后缀的文件夹；

    ![image-20220914113407066](image/image-20220914113407066.png)

    ![image-20220914113626323](image/image-20220914113626323.png)

3. 新建一个文件夹，将 `Release` 文件夹下生成的 `.exe` 文件拷贝进去；

4. 使用QT自带的命令行工具，使用 `windeployqt` 命令进行打包；

    - 打开命令行工具

    ![image-20220914114231099](image/image-20220914114231099.png)

    - 使用个命令行指令，进入刚才新建的文件夹中；

        ```shell
        cd C:\Users\Administrator\Desktop\MH
        ```

    - 使用 `windeployqt MH.exe` 对可执行文件进行打包；

        <img src="image/image-20220914114719352.png" alt="image-20220914114719352" style="zoom:80%;" />

        <img src="image/image-20220914114803597.png" alt="image-20220914114803597" style="zoom:80%;" />

5. 打开刚才安装的 `Enigma virtual box` 软件，按照步骤进行操作；

    - 点击 `浏览` ,加载需要打包的可执行文件；
    - 点击 `增加` -- `增加文件夹(递归)`， 选择刚才新建的文件夹；
    - 点击 `文件选项` ,勾选 `压缩文件` ;
    - 点击 `执行封包` ,开始进行打包操作；
    - 压缩完成；

    <img src="image/image-20220914115137847.png" alt="image-20220914115137847" style="zoom:80%;" />

    <img src="image/image-20220914115215434.png" alt="image-20220914115215434" style="zoom:80%;" />

### 写在最后

目前为止已经完成了基于QT实现跑环成本的计算功能，阶段性进行总结：

* 优点
    1. 实现了宝宝环计算的功能；
    2. 能够手动对当前环数和当前积分进行调整；
    3. 能够对误点进行纠错处理；
    4. 能够对设置的物品价格进行自动记录，避免下次使用重复配置；
* 缺点
    1. 没有支持文件导出功能，理想中的状态可以导出当前的记录并保存到EXCEL中；