控制语句:
	if语句(条件语句)
	简化的形式(如果不加{}，则条件只包含一句)
	if(条件表达式)
	{
		语句1;
		...
		语句1;
	}
	
	阶梯形式:
	if(){
	
	}else if(){
	
	}else if(){
	
	}else{
	
	}
	
	嵌套式:
	if(){
		if(){
		}else{
		}
	}else{
		if(){
		}else{
		}
	}
	
分支语句:switch
		switch(整数或整数表达式){
			case 常量或常量表达式1：
				语句;
				break;
			case 常量或常量表达式2：
				语句;
				break;
			case 常量或常量表达式3：
				语句;
				break;
			...
			case 常量或常量表达式n：
				语句;
				break;
			default:
				语句;
				break;
		}

循环语句for:
	for(表达式1;表达式2;表达式3){
		循环体;
	}
	执行此次循环时，表达式1只会执行1次；
	先执行表达式2，为真则执行循环体，为假退出循环
	循环体执行完成，执行表达式3
	表达式3执行完成，再执行表达式2
	
	for(int i = 0; i < 10; i++);
	
	注:
		表达式都可以省略 for(;;); //代表死循环
	嵌套for循环:
	for(表达式1;表达式2;表达式3){
		for(表达式4;表达式5;表达式6){
			循环体;
		}
	}
	1、执行表达式1
	2、执行表达式2，表达式2为假就退出循环，为真继续执行
	3、表达式4
	4、执行表达式5，表达式5为假，执行表达式3
		再执行表达式2，表达式2为假退出循环
		为真继续执行第3步
	5、执行循环体
	6、执行表达式6
	7、跳到第4步执行
	
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			printf("i:%d j:%d\t", i, j);
		}
		puts("");
	}
	i:0 j:0	   i:0 j:1	  i:0 j:2
	i:1 j:0    i:1 j:1    i:1 j:2
	i:2 j:0    i:2 j:1    i:2 j:2
	
while循环:
	while(表达式1){
		循环体;
	}
	表达式1为真则执行循环体，然后继续执行表达式1...为假退出while循环
	while(1);
	
	do{
		循环体;
	}while(条件表达式)
	先执行一次循环体，再执行条件表达式，为真继续执行循环体...为假退出循环
	
goto跳转语句:
	它只能在同一个函数内部跳转
	int main()
	{
		puts("111111111");
		puts("222222222");
		goto xxx;
		puts("333333333");
		xxx:
		puts("444444444");
	}
	
作业:
	1、编写程序实现输入一个年份，判断是否是闰年.
		能被4整除，但不能被100整除的年份；
		能被100整除，又能被400整除的年份；
	
	2、打印100以内的偶数.
	
	3、打印所有的水仙花数。
		一个三位数，它的个位十位百位的立方和等于它本身
		
	4、打印99乘法表。
	
	5、打印如下图形
		*
	   ***
	  *****
	 *******
	*********
	
	6、打印100以内所有的质数.
	
	7、用while循环实现第2、3题
	
	8、不使用for和while实现求1-100的累加求和.(goto)
	
	

	
	
	
	
		
	