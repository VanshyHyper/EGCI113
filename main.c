#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s1, lb1, o1, s2, lb2, o2;
    //Integers

    printf("Enter the weight of the first object (st,lb,oz)\n");
    scanf("%d,%d,%d", &s1, &lb1, &o1);
    //First object weight

    printf("\nEnter the weight of the second object (st,lb,oz)\n");
    scanf("%d,%d,%d", &s2, &lb2, &o2);
    //Second object weight

    int sum_s = s1+s2;
    int sum_lb = lb1+lb2;
    int sum_o = o1+o2;
    int avg_s = (s1+s2)/2;
    int avg_lb = (lb1+lb2)/2;
    int avg_o = (o1+o2)/2;
    //Sum and average integers

    printf("\n%10s%6s%6s%6s\n","","st","lb","oz");
    printf("-----------------------------------\n");
    printf("%10s%6d%6d%6d\n","Weight 1",s1,lb1,o1);
    printf("%10s%6d%6d%6d\n","Weight 2",s2,lb2,o2);
    printf("-----------------------------------\n");
    printf("%10s%6.1f%6.1f%6.1f\n","Sum",(float)sum_s,(float)sum_lb,(float)sum_o);
    printf("%10s%6.1f%6.1f%6.1f\n","Average",(float)avg_s,(float)avg_lb,(float)avg_o);
    //Display

    return 0;
}
