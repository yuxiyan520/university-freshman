#include <stdio.h>
#include <math.h>
#include <string.h>
const double pi=3.141593;
int main()
{
	int i;
	scanf("%d",&i);
	switch(i)
	{
	case 1:
		printf("I love Luogu!");
		break;
	case 2:
		printf("6 4");
		break;
	case 3:
		printf("3 12 2");
		break;
	case 4:
		printf("166.666\n");
		break;
	case 5:
		printf("15");
		break;
	case 6:
		printf("%.4f",sqrt(117));
		break;
	case 7:
		printf("110\n90\n0\n");
		break;
	case 8:
		printf("%d\n%d\n%lf\n",2*pi*5,pi*5*5,1.0*4*pi*5*5*5/3);
		break;
	case 9:
		printf("22\n");
		break;
	case 10:
		printf("9\n");
		break;
	case 11:
		printf("%lf",1.0*100/3);
		break;
	case 12:
		printf("13\nR\n");
		break;
	case 13:
		printf("%d",pow((3.141593*(4*4+10*10)),1.0/3));
		break;
	case 14:
		printf("50\n");
		break;
	}
 	return 0;
}

