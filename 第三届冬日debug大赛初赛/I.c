#include<stdio.h>
#include<string.h>
char s[1000][1005];
int main(){
    int len[1000],mn=0,mx=0,i;
    for(i=0;gets(s[i]);i++)
        len[i]=strlen(s[i]);
    for(int j=0;j<i;j++){
        if(len[j]<len[mn])mn=j;
        if(len[j]>len[mx])mx=j;
    }
    printf("%s\n",s[mn]);
    printf("%s\n",s[mx]);
    return 0;
}
