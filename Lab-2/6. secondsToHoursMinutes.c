#include<stdio.h>
int main(){
    int seconds, hours, minutes;

    printf("Enter the value in seconds: ");
    scanf("%d", &seconds);

    hours = seconds/3600;
    minutes = (seconds/60) - (hours*60);
    seconds = seconds - hours * 3600 - (minutes * 60);

    printf("Hours=%d, Minutes=%d, Seconds=%d", hours,minutes,seconds);
}