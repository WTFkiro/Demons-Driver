# DEMONS DRIVER


## Python + OpenCV     
>采集原视频中led信息，将结果格式化输出到output
该程序同样适用于其他8X8点阵视频，调用有亿点麻烦  
之后可能做成函数方便使用（可能）  

## Arduino + WS2812B   
>基于[FastLED](https://github.com/FastLED)库   
实现DEMONS驱动器的led面板效果  
release1.0版本以后，将使用Wemos D1 R32开发   
持续更新中    

# bilibili@正经的kiro
>我的B站主页：<https://space.bilibili.com/25416919>  
本项目代码开源，可自由下载，研究。  
转载，发布等请注明GitHub项目源地址  
仅供学习交流，请勿用作商业使用  

## 12.09日更新

1. 将按键换成了三按键模块，增加了台词按钮，和一个意义不明的按钮

2. 优化了音频控制，修复部分音频错误，增加了开机启动音

3. 优化了部分动画效果

## 12.08日更新

1. 加入了旋钮模块，增加了两个控制函数：
    * VolumeSet,可通过旋钮调节设备音量
    * ANIMAL，可通过旋钮选择不同印章

2. 新增ShowAdd函数，现在可将add过的印章记录，并在超必杀时依次显示

3. 完善了按压逻辑，现在一次按压进入Add动画，连续按压两次进入超必杀

## 12.07日更新
用CAD画了下外壳，过两天组装一下，代码目前没啥好改的，摸了

## 12.06日更新

最近捣鼓的基本都是硬件方面的改动，所以基本没有什么新代码提交QwQ  
1. 将MP3模块替换为JQ8900，喇叭更换了3W 4Ω双内磁喇叭，音质提升十耳朵！

2. 针对新MP3模块重写了Main_Mp3文件，对音频进行了整理，选择音频更方便

3. 增加Uno原形扩展板，将mp3模块以及很多走线整合到了扩展板上，集成度UP

## 12.04日更新

1. Demons Driver 1.2 release  
    所有动画全部制作完成

    1. 契约签订
        * Deal
        * Deal Loop
        * Demons Eye
        * Decide UP
    
    2. 必杀技
        * Charge
        * Finish Push
        * Finish Loop
        * Demons Finish
    
    3. 道具增强
        * Add
        * Add Loop
        * Add Push
        * Dominate UP
    
    4. 超必杀
        * Demons Requiem

    5. 目前演示中出现过的所有印章
        * Spider
        * Bata
        * Lex
        * Lion

2. 对应的所有音频分割完成
   
## 12.03日更新

1. Demons Driver 1.1 release
    * update：优化了Anime目录结构，新增Anime工程文件，可直接调用动画使用
    * update：移除了Arduino目录，新增ESP32/Demons工程，可一次实现所有动画效果
    * notes： 如果需要使用新的ESP32工程文件，请提前导入[EspSoftwareSerial库](https://github.com/plerup/espsoftwareserial/)，该库函数可在Arduino上实现ESP32的软件串口通信

2. 增加动画
    * 恐龙
    * 第二次按压
    * 超必杀


## 12.02日更新


1. Demons Driver 1.0 release！  
    * 13个不同的动画，包括了Demons腰带的所有动画，可自由组合  
    * 包含对应的音频文件，可以自己增加音效    
    * 预置变身动画和DominateUP-蝗虫动画两个工程文件，带有按键响应，可直接烧录使用  

2. 新的ESP32开发板到了，之后会将项目移植到Wemos D1 R32进行开发，4M flash可以做更大的工程啦

## 12.01日更新


1. 增加动画
    * 充能
    * 必杀技

2. 优化了视频采集代码，采集准确率更高,设置条件分支批量导出颜色
3. 在Premiere中设置了工程文件，提取动画更方便了


## 11.30日更新


1. 增加了MP3模块（YwRobot）以及对应的控制代码，有内味了！
2. 整体优化了控制逻辑，修改了部分动画小bug
3. 对demons的灯珠颜色进行了优化，增强了红蓝对比度


## 11.29日更新


1. 将slice动画代码定义为函数，方便主程序调用；
2. 添加了按键控制效果，可以使用按键进行变身操作了，henshin！
3. Arduino 的 32K flash 真的不够用了！ 准备改用esp32来写


## 11.28日更新


1. 增加动画
    * 增强
    * 增强循环
    * 按压
    * 主宰升级
    * 蝗虫

2. 上传了Aruduino工程文件，可直接烧录使用
3. 优化了动画delay时间，方便和音效匹配


## 11.27日更新


1. 优化了视频采集代码，将灯珠控制代码减少了80%（原来是有多垃圾啊KORA）
2. 将灯珠控制代码分割，便于之后使用，优化了部分重复代码减小体积
