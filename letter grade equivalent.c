#include <stdio.h>
int main(){
    int grade;
    printf("Enter grade: ");
    scanf("%d",&grade);
    if (grade > 100 || grade <= 0)
    {
        printf("Invalid input. Try Again.");
    }
    else if(grade <= 100 && grade > 92){
        printf("Your letter grade is A.");
    }
    else if (grade <= 91 && grade > 84)
    {
        printf("Your letter grade is A-.");
    }
    else if (grade <= 83 && grade > 76)
    {
        printf("Your letter grade is B.");
    }
    else if (grade <= 75 && grade > 68)
    {
        printf("Your letter grade is B-.");
    }
    else if (grade <= 67 && grade > 60)
    {
        printf("Your letter grade is C.");
    }
    else if (grade <= 59 && grade >= 50)
    {
        printf("Your letter grade is D.");
    }
    else{
        printf("Your letter grade is F");
    }
    return 0;
}