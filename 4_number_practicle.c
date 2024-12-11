// 4. নম্বরের ভিত্তিতে গ্রেড বের করার একটি সি প্রোগ্রাম লিখ।

#include <stdio.h>

int main () {

    int marks;
    printf("Enter your marks : ");
    scanf("%d", &marks);

    if (marks > 100 || marks < 0) {
        printf("Please enter valid marks\n");
    }


    else if(marks >= 80) {
        printf("Your Grade is : A+\n");
    }

    else if (marks >= 70) {
        printf("Your grade is : A\n");
    }

    else if (marks >= 60) {
        printf("Your grade is : A-\n");
    }

    else if (marks >=50) {
        printf("Your grade is : B\n");
    }

    else if (marks >=40) {
        printf("Your grade is : C\n");
    }

    else if (marks >=33) {
        printf("Your grade is : D\n");
    }

    else if (marks >=0) {
        printf("Your grade is : F\n");
    }

    return 0;
}