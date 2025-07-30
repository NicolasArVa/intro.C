#include <stdio.h>

int main() {
    double total, seasons, chapters, duration, intro; 
    
    
    printf("Think of any serie...\nEnter the number of seasons: ");
    scanf("%lf", &seasons);
    
    printf("Enter the average number of chapters per season: ");
    scanf("%lf", &chapters);
    
    printf("Enter the average duration of each chapter: ");
    scanf("%lf", &duration);
    
    printf("Enter the duration of the intro: ");
    scanf("%lf", &intro);
    
    total = seasons * chapters * (duration - intro) / 60;
    
    printf("You have invested %lf hours in that serie!.\n", total);
    
    return 0;
}