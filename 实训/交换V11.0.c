#include <stdio.h>

int main()
{
	//编程题一：请使用三目运算符编程：输入两个整数，输出它们的差值的绝对值。
//	int  a,b,c;
//	printf("请输入两个整数，用空格隔开：");
//	scanf("%d%d",&a,&b);
//	c = (a>b) ? a-b:b-a;
//	printf("整数%d和整数%d差值的绝对值为：%d",a,b,c);

	//编程题二：请输入一个四位整数，求该数的个位、十位、百位、千位上的数之和，并输出。
//	int a,sum;
//	printf("请输入四位整数:");
//	scanf("%d",&a);
//	sum = a % 10 + a / 10 % 10 + a / 100 % 10 + a / 1000;
//	printf("该数的个位、十位、百位、千位上的数之和为：%d",sum);

	//编程题三：使用三目运算符统计学生成绩等级，成绩在90-100之间（包括90和100）等级为A，其余为B，成绩从键盘输入。正确定义数据类型，变量命名做到见字识意。
//	float score;
//	char grade;
//	printf("请输入成绩：");
//	scanf("%f",&score);
//	grade = (score >= 90&&score <= 100) ? 'A':'B';
//	printf("%c",grade);

	//编程题四：使用putchar、getchar函数实现：在键盘上输入5个字符'C'、'H'、'I'、'N'、'A',然后依次输出这5个字符。
//	char a,b,c,d,e;
//	printf("请依次输入5个字符：");
//	a = getchar();
//	b = getchar();
//	c = getchar();
//	d = getchar();
//	e = getchar();
//	putchar(a);
//	putchar(b);
//	putchar(c);
//	putchar(d);
//	putchar(e);

	//编程题五：从键盘输入一个实型数，将其强制转换成整型后，求除2后的余数，并输出。
//	float a;
//	printf("请输入一个小数：");
//	scanf("%f",&a);
//	a = (int)a % 2;
//	printf("强制转化成整形后，除2的余数为：%.f",a);
	
	//编程题六：请编写一段程序，计算该圆的面积与周长，结果保留两位小数。其中，半径、面积和周长均设置为单精度浮点型，半径从键盘输入。
//	float pai = 3.14,r,s,c;
//	printf("请输入圆半径：");
//	scanf("%f",&r);
//	s = pai * r * r;
//	c = pai * 2 * r;
//	printf("圆的面积为：%.2f\n圆的周长为：%.2f",s,c);
	
	//编程题七：已知交换前x的值为10，y的值为8，请交换两个整数的值，并输出。
//	int x=10,y=8,c;
//	printf("交换前x=%d，y=%d\n",x,y);
//	c = x;
//	x = y;
//	y = c;
//	printf("交换后x=%d，y=%d",x,y);	

	//编程题八：四位整数逆序输出，其中整数从键盘输入
//	int a,a1,a2,a3,a4;
//	printf("请输入4位整数：");
//	scanf("%d",&a);
//	a1 = a /1000;
//	a2 = a /100%10;
//	a3 = a /10%10;
//	a4 = a % 10;
//	printf("逆序后输出为：%d%d%d%d",a4,a3,a2,a1);

	//编程题九：已知某同学语文成绩为90.5，数学成绩为98，英语成绩为98.8，求三门功课的总成绩（保留1位小数）、平均成绩（保留两位小数）。
//	float sum,ave,chinese=90.5,english=98.8,math=98;
//	sum = chinese + math + english;
//	ave = sum / 3.0;
//	printf("总成绩为：%.1f，平均成绩为：%.2f",sum,ave);
	
	//编程题十：本案例要求对字符进行加密的功能。输入小写字母a～z，并存储到变量word中。加密规则：使用字符后面的第6个字符代替原来的字符。加密后的字母存储到变量password中，输出password。
//	char a;
//	printf("请输入啊a~z的一个字母：");
//	scanf("%c",&a);
//	a = a + 6;
//	printf("加密后的字母为：%c",a); 

	//编程题十一：请用C语言描述一个你的的年龄、身高、体重、性别，并输出到显示器上，请使用"见字识意"的变量以及合适的数据类型。其中，性别表示方法，男性用字符 "M"表示，女性用字符"F"表示。
//	int age = 18;
//	char gender = 'M';
//	double height = 180,weight = 50;
//	printf("age=%d,height=%.2lf,weight=%.2lf,gender=%c",age,height,weight,gender);


}
