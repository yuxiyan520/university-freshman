#include<stdio.h>
#include<string.h>
#define MN (50+5)
char s[MN];
int flag[MN];
int n;
int main(){
  while(gets(s)!=NULL){
    memset(flag,0,sizeof flag);
    n=strlen(s);
    for(int i=0;i<n-3;i++)
      if(s[i]=='g'&&s[i+1]=='o'&&s[i+2]=='o'){
        int t=i;i+=3;
        while(1){
          if(s[i]!='o'&&s[i]!='d'){
          	i--;
            break;
          }
          else if(s[i]=='d'){
            flag[t]=1;
            flag[i]=-1;
            break;
          }
          else i++;
        }
      }
    for(int i=0;i<n;i++){
      if(!flag[i])printf("%c",s[i]);
      else{
        while(flag[i]>=0)i++;
        printf("perfect");
      }
    }
    puts("");
  }
}
