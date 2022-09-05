#include<stdio.h>
/*
int main(){
    // Integer Type Variable
    int price = 100;
    printf("price = %d\n", price);

    // Floating type
    float temparature = 30.3;
    printf("temp = %f\n", temparature);

    double tempareture2 = 43.2;
    printf("temp2 = %lf\n", tempareture2);

    char charecter = '<';
    printf("charecter = %c\n", charecter);

    return 0;
}
*/

#include<stdio.h>
int main(){

    int marks_english;
    int marks_math;

    printf("Enter Marks in English: ");
    scanf("%d", &marks_english);

    printf("Enter Marks in Math: ");
    scanf("%d", &marks_math);

    int total_marks = marks_english + marks_math;
    printf("Total Marks = %d", total_marks);

    return 0;
}
