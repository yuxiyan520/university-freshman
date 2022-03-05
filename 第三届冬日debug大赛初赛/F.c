#include<stdio.h>
#include<string.h>
int main(){
	int l,s,c,i;
	char str[110];
	while(scanf("%s",str) != EOF){
		l=strlen(str);
		c=0;
		s=0;
		for(i=0;i<l;++i){
			if(str[i]=='a'){
				if(s==2)s=3;
				else s=1;
			}
			else if(str[i]=='k'){
				if(s==1||s==3)s=2;
				else s=0;
			}
			else if(str[i]=='q'){
				if(s==3)s=4;
				else s=0;
			}
			else if(str[i]=='u'){
				if(s==4)s=5;
				else s=0;
			}
			else if(str[i]=='i'){
				if(s==5)s=6;
				else s=0;
			}
			else if(str[i]=='z'){
				if(s==6)c++;
				s=0;
			}
			else s=0;
		}
		printf("%d\n",c);
	}
	return 0;
}
