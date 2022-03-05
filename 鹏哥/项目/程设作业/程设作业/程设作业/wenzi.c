#define _CRT_SECURE_NO_WARNINGS 1
#include "wenzi.h"

void color(short x)	//自定义函根据参数改变颜色 
{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), x); 
}

int first()
{
	int input,flag;
	printf("你好！\n");
	printf("查看作业需要输入密码以验证身份\n");
	printf("可以通过小游戏“三子棋”来获得密码\n");
	printf("是否获得？（是：1  否：0）\n");
	do
	{
		scanf("%d", &input);
		if (input == 1)
		{
			//开始游戏
			flag=test();
			return flag;
		}
		else if (input == 0)
		{
			//不看作业
			printf("好的，请直接给我100分\n");
			Sleep(1500);
			printf("开玩笑！想获得密码，来玩游戏吧！\n");
			Sleep(1000);
			flag = test();
			return flag;
		}
		else
		{
			printf("输入不合法，请重新输入\n");
		}
	} while (input != 0 && input != 1);
}

void second(int flag)
{
	char password[20];
	if (flag == 1)//第一关获胜了
	{
		second1:
		printf("很棒啊，恭喜你可以获得密码\n");
		printf("密码为：123456\n");
		Sleep(2000);
		system("cls");
		printf("请输入密码：\n");
		while (1)
		{
			scanf("%s", &password);
			if (strcmp(password, "123456") == 0)
			{
				color(4);
				printf("   ！！警告！！\n");
				printf("   ！密码错误！\n");
				color(15);
				break;
			}
			else
			{
				printf("输入错误，请重新输入\n");
			}
		}
		Sleep(1500);
		printf("不会吧，不会吧，不会真的有人以为我会给真密码吧？\n");
		Sleep(2000);
		printf("好了，还是来看看吧！\n");
		Sleep(2000);
		system("cls");
	}
	else//第一关失败了
	{
		printf("真可惜\n");
		printf("不过，要记住：失败乃成功之母\n");
		printf("就像我从开始接触程设到现在可以完成一些小创意，不就是从一步一步的失败慢慢来的么\n");
		do
		{
			printf("加油，你可以的\n");
			printf("请重新再来一次，相信你一定可以的\n");
			flag = test();
		} while (flag != 1);
			goto second1;
	}

}

void third()
{
	system("color 70");
	printf("E9-2021级程序设计基础      ");
	color(39 | 2048);
	printf("ABCDEF");
	color(71 | 2048);
	printf("GHIJ\n");
	color(112);
	printf("第九次练习\n");
	printf("简介                  ");
	color(116);
	printf("G ");
	color(113);
	printf("三点共线                  ");
	color(116);
	printf("WA\n");
	color(23);
	printf("题目      ");
	color(119);
	printf("                                        ");
	color(116);
	printf("WA\n");
	color(112);
	printf("排名                                              ");
	color(116);
	printf("WA\n");
	color(112);
	printf("我的提交                                          ");
	color(116);
	printf("WA\n");
	color(112);
	printf("提问&&公告                                        ");
	color(116);
	printf("WA\n");
	color(112);
	printf("                  $@^%&*#&*#@*@$*&#&               ");
	color(116);
	printf("WA\n");
	color(112);
	printf("                  :):;^%^%#%&@}{\"?(^&^               ");
	color(116);
	printf("WA\n");
	color(112);
	printf("                  }(}$@^%^%#&#%$@%&:|&#&               ");
	color(116);
	printf("WA\n");
	color(112);
	printf("                  ^~$~${\":?><{|\\*#&               ");
	color(116);
	printf("WA\n");
	color(112);
	printf("                  $@^<>>?/;'\\[';&#&               ");
	color(116);
	printf("WA\n");
	color(112);
	printf("                  [';&#&~${\":?><{| \n");
	printf("                  [';&#&~$&#^*$&^%#^\n");
	printf("                  >{\"{\":P>{:P:*$^&^#^");
	printf("\n\n\n\n\n\n\n\n");
	Sleep(2000);
	printf("是否还记得这样熟悉的画面\n");
	Sleep(1500);
	printf("这样一个又一个题目\n");
	Sleep(1500);
	printf("我从一个小白开始学习\n");
	Sleep(1500);
	printf("逐渐成长为了一个天天受虐的大白\n");
	Sleep(1500);
	printf("可是，正是这样一个个错误的代码，一次次考试  ");
	Sleep(2000);
	printf("才让我成为现在更好的我啊\n");
	Sleep(1500);
	printf("感谢让我认识了C语言，让我可以做一些小东西，一些喜欢的东西\n");
	Sleep(2500);
	printf("一学期转眼就过去了，可是，学习之路还未止境\n");
	Sleep(2000);
	printf("我还在路上         ");
	Sleep(1000);
	printf("加油!!!");
	Sleep(1500);
}

void Finally()
{
	int  i, j, k, l, m, q=15;
	char c = 35;
	color(7);
	system("cls");
	printf("那么，完结！\n");
	Sleep(1000);
	while (q--)
	{
		system("cls");
		color(q);
		printf("\n");
		for (i = 1; i <= 3; i++)
		{
			for (j = 1; j <= 32 - 2 * i; j++)  printf(" ");
			for (k = 1; k <= 4 * i + 1; k++)  printf("%c", c);
			for (l = 1; l <= 13 - 4 * i; l++)  printf(" ");
			for (m = 1; m <= 4 * i + 1; m++)  printf("%c", c);
			printf("\n");
		}
		for (i = 1; i <= 3; i++)
		{
			for (j = 1; j <= 24 + 1; j++)   printf(" ");
			for (k = 1; k <= 29; k++)   printf("%c", c);
			printf("\n");
		}
		for (i = 7; i >= 1; i--)
		{
			for (j = 1; j <= 40 - 2 * i; j++)  printf(" ");
			for (k = 1; k <= 4 * i - 1; k++)  printf("%c", c);
			printf("\n");
		}
		for (i = 1; i <= 39; i++)    printf(" ");
		printf("%c\n", c);
		for (i = 1; i <= 5; i++)    printf("\n");
		Sleep(300);
	}
	color(7);
	system("cls");
	printf("   芜湖    撒花    \n");
	printf("提示：请用小窗观看\n");
	Sleep(2000);
	i = 2500;
	while (i--)
	{
		color(1);    printf(" 0\t\t  ");
		color(2);    printf(" 0\t0 ");
		color(3);    printf(" 11\t\t\t\t\t\t\t\t\t\t ");
		color(4);    printf(" 00\t\t ");
		color(5);    printf(" 1\t\t\t\t\t\t\t ");
		color(6);    printf(" 00 ");
		color(7);    printf(" 11 \t\t");
		color(8);    printf(" 010 ");
	}
	color(7);
	printf("\n");
	Sleep(2000);
	system("cls");
	printf("                 ***\n                  ***\n                   ***\n\n");
	printf("	*****************************\n");
	printf("	*****************************\n");
	printf("	***                      ***\n");
	printf("	***    ***********      ***\n");
	printf("               ***********\n");
	printf("\n");
	printf("	 *************************\n");
	printf("	 *************************\n");
	printf("	       ***	 ***\n");
	printf("               ***	 ***\n");
	printf("	      ***	 ***\n");
	printf("	     ***	  ***	  **\n");
	printf("	    ****          *********\n");
	printf("	   ****	            *****\n");
}