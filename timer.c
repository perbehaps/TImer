#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

int hour,minute,second,f=0;
void delay(ms)
{
    clock_t gap = ms + clock();
    while (gap > clock());
}
int counter(){
    while(!kbhit() && f ==0){
            if(minute < 0){
                minute = 59;hour = hour-1;
            }
                if(second < 0){
                  second = 59;minute = minute-1;
                }
                printData();
                delay(1000);second = second-1;
            }
}

int printData(){
system("cls");
printf("%d:%d:%d\n",hour,minute,second);
if(hour+minute+second==0){
  exit(0);
}
}

int main()
{
    printf("stopwatch time to countdown from(in hh:mm:ss format) : ");
    scanf("%d:%d:%d",&hour,&minute,&second);
    while(1){
    counter();
    }
}
