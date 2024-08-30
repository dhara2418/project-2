#include<stdio.h>
void main()
{
    int marks;
    char grade;

    printf("enter the marks");
    scanf("%d",&marks);

    grade=(marks>=90)?'A' :(marks>=80)?'B'
                          :(marks>=70)?'C'
                          :(marks>=60)?'D'
                          :(marks>=50)?'E'
                          :            'F';

    printf(" the grade is:%c\n",grade);

    //switch//

    switch(grade)
    {
        case 'A':
             printf("Excellent work!\n");
        break;
        case 'B':
             printf("Well done.\n");
        break;
        case 'C':
             printf("Good job.\n");
        break;
        case 'D':
             printf("You passed, but you could do better.\n");
        break;
        case 'E':
             printf("You need hard work.\n");
        break;
        case 'F':
             printf("Sorry, you failed.\n");
         break;
        
    }
    // check eligiblity based on the grade//
    if(grade=='A'||grade=='B'||grade=='C'||grade=='D')
    {
        printf("Congratulations! You are eligible for the next level.\n");
    }
    else if (grade=='F')
    {
        printf("Please try again next time.\n");
    }
    else
    {
        printf("Invalide grade");
    }
                             

    

}