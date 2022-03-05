#include <stdio.h>
int main() {
    int score;
    int credit;
    int r;
    int scoreSum = 0;
    int creditSum = 0;
    double mean;
    do {
       r = scanf("%d %d",&score,&credit);
       r>0?
       scoreSum += score * credit,
       creditSum += credit:0;
    } while (r > 0);
    mean = (double)scoreSum / (double)creditSum; 
    printf("%.2f\n",mean);
}
