/*
#include<stdio.h>
int main(){
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    int result = num1 + num2;
    printf("%d + %d = %d\n", num1, num2, result);

    int vagfol = num1 / num2;
    printf("%d / %d = %d\n", num1, num2, vagfol);

    int vagses = num1 / num2;
    printf("%d %% %d = %d\n", num1, num2, vagses);


    return 0;
}
*/

#include<stdio.h>
int main(){
    double num1, num2;
    scanf("%lf %lf", &num1, &num2);

    double result = num1 + num2;
    printf("%lf + %lf = %lf\n", num1, num2, result);

    double vagfol = num1 / num2;
    printf("%lf / %lf = %lf\n", num1, num2, vagfol);

    double vagses = num1 / num2;
    printf("%lf %% %lf = %lf\n", num1, num2, vagses);


    return 0;
}

