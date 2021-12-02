# Anime说明

每个.ino文件中分别包含对应一段动画的函数  
将需要使用的文件拷贝到Arduino工程文件夹，然后直接调用同名函数即可  


## 示例

```C++
 ...

void loop()
{
	Demons_Deal();
	Demons_Loop();
	Demons_Eye(2000);
	Demons_DecideUP();
}

 ...
```
