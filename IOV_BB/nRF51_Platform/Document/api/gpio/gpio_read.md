#读取GPIO
***
##函数声明
```
uint8_t gpio_read (uint8_t pin);
```

***
##函数功能
获取指定 pin 脚的状态。

***
##函数参数
参数    | 数据类型   | 说明
:----- | :-------- | :------
*pin*    | uint8_t  | 引脚号
*返回值*  | uint8_t     | 当前引脚的状态

***
###关于 *返回值* 

*返回值* 的数值|说明
:-------- | :------
非0 | gpio为高电平
0|gpio为低电平

***
##函数举例
```
	//当前函数
	void foo( void )
	{
		...
		
		uint8_t statue;
		
		/*将偏移量为18的引脚配置成高电平*/
		statue = gpio_setup(18);
		
		//这里的statue就是新的状态
		
		...
	}
```