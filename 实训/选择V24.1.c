#include<stdio.h>
main()
{
//编程题一：通过从键盘输入年份和月份，输出月份天数。
//	int year,month,day;
//	printf("请输入一个年份：");
//	scanf("%d",&year);
//	printf("请输入一个月份："); 
//	scanf("%d",&month);
//	switch(month)
//	{
//		case 1:
//		case 3:
//		case 5:
//		case 7:
//		case 8:
//		case 10:
//		case 12:day = 31;break;
//		case 2:
//			{
//				if(year%4==0&&year%100!=0||year%400==0)
//				{
//					day = 29;
//				}
//				else
//				{
//					day = 28;
//				}
//			}
//			break;	
//		case 4:
//		case 6:
//		case 9:
//		case 11:day = 30;break;	
//	}
//	printf("该月有%d天",day);

//编程题二：为优待顾客，商店对购物额为1000元以上（含1000元，下同）者，八折优惠；500元以上，1000元以下者，九折优惠；200元以上，500元以下者，九五折优惠；200元以下者，九七折优惠；100元以下者不优惠。编程实现：由键盘输入一个购货款额，计算应收的款额。当输入值为负值时，提示"输入有误，请重新输入！"。 
//	double money;
//	printf("请输入购物额：");
//	scanf("%lf",&money);
//	if(money >= 1000)
//	{
//		money = money*0.8;
//	}
//	else if(money >= 500)
//	{
//		money = money*0.9;
//	}
//	else if(money >= 200)
//	{
//		money = money*0.95;
//	}
//	else if(money >= 100)
//	{
//		money = money*0.97;
//	}
//	else if(money < 0)
//	{
//		printf("输入有误！");
//		return 0;
//	}
//	printf("应付款：%.2f",money);
	
//编程题三：用switch语句编程实现：输入一个正整数，输出该整数除以3的余数。：
//	int num,a;
//	printf("输入一个正整数：");
//	scanf("%d",&num);
//	a = num%3;
//	switch(a)
//	{
//		case 0:printf("该整数能被3整除");break;
//		case 1:printf("余数为1");break;
//		case 2:printf("余数为2"); break;
//	}
	 
//编程题四：有一个函数：分别用if…else嵌套语句和switch语句实现：输入x的值，输出y的值。
//	double x,y;
//	printf("请输入一个非负数：");
//	scanf("%lf",&x);
//	if(x < 0)
//	{
//		printf("输入有误，请输入非负数！");
//		return 0;
//	}
//	(1)
//	if(x >= 0&&x < 2)
//	{
//		y = x;
//	}
//	else if(x >= 2&&x < 4)
//	{
//		y= 2*x-2;
//	}
//	else if(x >= 4)
//	{
//		y = 3*x-6;
//	}
//	printf("y=%.2f",y); 
//	(2)
//	switch((int)x)
//	{
//		case 0:
//		case 1:y = x;break;
//		case 2:
//		case 3:y = 2*x-2;break;
//		default:y = 3*x-6;break;	
//			
//	}
//	printf("y=%.2f",y);

//编程题五：某厂对产品进行分级，产品性能在90分以上，则该产品定为A级产品；性能在80~89分，则定为B级产品；如果性能得分为60~79分之间，则定为C级；产品性能在60分以下，则该产品定为D级产品。试编写一程序实现对该厂产品进行分级评定。
//	double score;
//	printf("请输入产品的分数：");
//	scanf("%lf",&score);
//	if(score > 100||score < 0)
//	{
//		printf("输入有误");
//		return 0;
//	}
//	switch((int)score/10)
//	{
//		case 10:
//		case 9:printf("产品等级为A");break;
//		case 8:printf("产品等级为B");break;	
//		case 7:
//		case 6:printf("产品等级为C");break;		
//		default:printf("产品等级为D");break;	
//	} 
	
//编程题六：编写程序，判断通过键盘输入的字符属于哪一类字符（大写字母、小写字母、数字或其其它字符）。
//	char word;
//	printf("请输入一个字符：");
//	scanf("%c",&word);
//	if(word >= '0'&&word <= '9')
//	{
//		printf("输入的字符是数字");
//	}
//	else if(word >= 'a'&&word <= 'z')
//	{
//		printf("输入的字符是小写字母");
//	}
//	else if(word >= 'A'&&word <= 'Z')
//	{
//		printf("输入的字符是大写字母");
//	}
//	else
//	{
//		printf("输入的是其他字符");
//	}

//编程题七： 输入三个整数，要求按由小到大的顺序输出。
//	int  a[3],i,j,t;
//	printf("请输入3个整数，用空格隔开：");
//	for(i = 0;i < 3;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	for(i = 0;i < 3-1;i++)
//	{
//		for(j = 0;j <3-1-i;j++)
//		{
//			if(a[i+1] < a[i])
//			{
//				t = a[i];
//				a[i] = a[i+1];
//				a[i+1] = t;
//			}
//		}
//	}
//	printf("从小到大的顺序输出为：");
//	for(i = 0;i < 3;i++)
//	{
//		printf("%d ",a[i]);
//	}
	
//编程题八： 请使用三目运算符编程：输入两个整数，输出它们的差值的绝对值。
//	int a,b,m;
//	printf("请输入两个整数，以空格隔开：");
//	scanf("%d %d",&a,&b);
//	m = a>b?a-b:b-a;
//	printf("整数%d和整数%d差值的绝对值为：%d",a,b,m);

// 编程题九： 请输入一门课的理论成绩和实践成绩，若这两部分成绩均及格（不低于60分），则输出"恭喜，通过！"；否则输出"请加强学习！"。
//	double score1,score2;
//	printf("请输入理论成绩和实践成绩，以空格隔开：");
//	scanf("%lf %lf",&score1,&score2);
//	if(score1 >= 60 &&score2 >= 60)
//	{
//		printf("恭喜，通过！");
//	}
//	else 
//	{
//		printf("请加强学习！");
//	}
	 
// 编程题十： 请输入一个四位整数，求该数的个位、十位、百位、千位上的数之和，并输出。输出结果：
//	int num,a1,a2,a3,a4,sum;
//	printf("请输入4位整数：");
//	scanf("%d",&num);
//	a1 = num/1000;
//	a2 = num/100%10;
//	a3 = num/10%10;
//	a4 = num%10;
//	sum = a1+a2+a3+a4;
//	printf("该书的个位、十位、百位、千位上的数之和：%d",sum);
	
// 编程题十一：请从键盘输入年份，判断输入的年份是否为闰年，判断闰年的条件是否能被4整除，但不能被100整除，或者能被400整除。
//	int year;
//	printf("请输入年份（整数）:");
//	scanf("%d",&year); 
//	if(year%4==0&&year%100!=0||year%400==0)
//	{
//		printf("该年份为闰年");
//	}
//	else 
//	{
//		printf("该年份不是闰年");
//	} 
	
// 编程题十二：通过键盘输入一个月份，输出该月份是第几季度（用switch语句完成，体会break的用法）。
//	int month;
//	printf("请输入一个月份：") ;
//	scanf("%d",&month);
//	switch(month)
//	{
//		case 1:
//		case 2:
//		case 3:printf("该月份是第一季度");break;
//		case 4:
//		case 5:
//		case 6:printf("该月份是第二季度");break;
//		case 7:
//		case 8:
//		case 9:printf("该月份是第三季度");break;
//		case 10:
//		case 11:
//		case 12:printf("该月份是第四季度");break;
//		default:printf("输入错误！");break;	
//	}

//编程题十三：编写一个程序，要求输入一个学生的考试成绩，输出其分数和对应的等级。学生成绩分为5个等级：小于60分的为不及格；60～70分的为及格；70～80分的为中等；80～90分的为良好；90分以上的为优秀；其他值，提示"输入有误！"（用switch语句完成）。
//	int score;
//	printf("请输入一个学生的成绩:");
//	scanf("%d",&score);
//	score = score % 10;
//	if(score<0 ||score > 100)
//	{
//		printf("输入有误");
//		return 0;
//	} 
//	switch(score)
//	{
//		case 10:case 9:printf("优秀");break;
//		case 6:printf("及格");break;
//		case 7:printf("中等");break;
//		case 8:printf("良好");break;
//		default:printf("不及格");break;                                             
//	}
	
//编程题十四：旅游景点为吸引游客，旺季和淡季门票价格不同，旺季为每年5-10月份，门票价格为200元，淡季门票价格是旺季的八折。不论是旺季还是淡季，65岁以上老人免票，14岁以下儿童半价，其余游客全价。请编写一个景点门票计费程序。
//	int month,age;
//	float money=200;
//	printf("请输入浏览月份：");
//	scanf("%d",&month);
//	printf("请输入游客年龄："); 
//	scanf("%d",&age);
//	if(age >= 65)
//	{
//		printf("免费！！！！！");
//		return 0;
//	}
//	if(age <= 14)
//	{
//		money = 0.5 * money;
//	}
//	if(month<5 ||month > 10)
//	{
//		money = 0.8 * money;
//	} 
//	printf("该游客应购买门票价格为%.2f元",money);
	
//	编程题十五：由键盘输入一个字符，若字符为小写字母，则将其转换成大写字母；若该字符为大写字母，则将其转换成小写字母；否则将其转换成ASCII码表中该字符的下一个字符。
//	char a;
//	printf("请输入一个字符：");
//	scanf("%c",&a);
//	if(a>='a'&&a<='z')
//	{
//		a = a - 32;
//	}
//	else if(a>='A'&&a<='Z')
//	{
//		a = a + 32;
//	}
//	else 
//	{
//		a = a + 1;
//	}
//	printf("转换后的字符为：%c",a);
	
//编程题十六：根据符号函数，编程实现输入一个x值，输出y值。
//	int a;
//	printf("请输入一个数：");
//	scanf("%d",&a);
//	if(a>0)
//	{
//		printf("1");
//	}
//	else if(a=0)
//	{
//		printf("0");
//	}
//	else 
//	{
//		printf("-1");
//	}

//编程题十七：判断输入的数据是否为0。
//	int a;
//	printf("请输入一个数：");
//	scanf("%d",&a);
//	if(a==0)
//	{
//		printf("是0");
//	}
//	else
//	{
//		printf("否0");
//	}

//编程题十八：判断输入的两个数据是否有0。
//	int a,b;
//	printf("请输入一个数：");
//	scanf("%d",&a);
//	printf("请输入第二个数：");
//	scanf("%d",&b);
//	if(a==0||b==0)
//	{
//		printf("有0");
//	}
//	else
//	{
//		printf("否0");
//	}	

// 编程题十九：输入两个整数，要求按由大到小的顺序输出。（两数交换）
//	int a,b,c;
//	printf("请输入一个数：");
//	scanf("%d",&a);
//	printf("请输入第二个数：");
//	scanf("%d",&b);
//	if(a<b)
//	{
//		c = b;
//		b = a;
//		a = c;
//	}
//	printf("%d\n%d",a,b);

//编程题二十：编写一个程序，任意输入一个整数，并输出其绝对值。
//	int a;
//	printf("请输入一个整数：");
//	scanf("%d",&a);
//	if(a<0)
//	{
//		a = -a; 
//	}
//	printf("绝对值：%d",a);	

//编程题二十一： 输入三个整数，要求按由小到大的顺序输出。
	int a,b,c,d;
	printf("请输入三个整数，以空格隔开：");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		d = b;
		b = a;
		a = d;
	}
	if(a>c)
	{
		d = c;
		c = a;
		a = d;
	}
	if(b>c)
	{
		d = b;
		b = c;
		c = d;
	}
	printf("从小到大的顺序输出为：%d %d %d",a,b,c);

// 编程题二十二： 请使用三目运算符编程：输入两个整数，输出它们的差值的绝对值。
//	int a,b,c;
//	printf("请输入两个整数，用空格隔开：");
//	scanf("%d%d",&a,&b);
//	c = a - b;
//	c=(c>0) ? c:-c;
//	printf("整数%d和整数%d差值的绝对值为：%d",a,b,c);

//编程题二十三： 请输入一门课的理论成绩和实践成绩，若这两部分成绩均及格（不低于60分），则输出"恭喜，通过！"；否则输出"请加强学习！"。
//	int a,b;
//	printf("请输入理论成绩：");
//	scanf("%d%d",&a,&b);
//	if(a>=60&&b>=60)
//	{
//		printf("恭喜，通过！");
//	}
//	else
//	{
//		printf("请加强学习！");
//	}		

//编程题二十四：请从键盘输入年份，判断输入的年份是否为闰年，判断闰年的条件是否能被4整除，但不能被100整除，或者能被400整除。
//	int year;
//	printf("请输入一个年份：");
//	scanf("%d",&year);
//	if(year%4==0&&year%100!=0||year%400==0)
//	{		
//		printf("该年份为闰年");
//	}
//	else
//	{
//		printf("该年份不为闰年"); 
//	}
	 
}
