# Anime说明

每个.ino文件中分别包含对应一段动画的函数  
打开Anime.ino示例文件，在loop中直接调用即可实现动画效果  

##  注意
由于Arduino Uno的Flash较小，无法一次烧录所有动画，请在设置完成后将多余的动画文件移除  


## 示例

```C++
 ...

void loop()
{
	//变身
    Demons_Deal();	//直接调用动画函数即可
    for (i = 0; i <= 5; i++)
    {
        Demons_Loop(); //Loop类动画放在循环语句可实现循环效果
    }
    Demons_Eye(1000); //可设置Eye动画持续时间
    Demons_DecideUP();
    Demons_Spider();
    delay(1000);

    //必杀
    Demons_More();
    Demons_Eye(1000);
    Demons_Finish();
    delay(1000);

    //增强
    Demons_Add();
    Demons_AddLoop();
    Demons_AddPush();
    Demons_AddLoop();
    Demons_Eye(1000);
    Demons_DominateUP();
    Demons_Bata();
    delay(1000);

    //蜘蛛待机小动画
    Demons_SpiderLoop();
}

 ...
```
