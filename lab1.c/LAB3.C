// If the marks obtained by a student in five different subjects are input through the keyboard, 
// find out the aggregate marks and percentage marks obtained by the student. 
// Assume that the maximum marks that can be obtained by a student in each subject is 100. 


#include<stdio.h>

int main() 
{
    float a,b,c,d,e,f,g;

    printf("marks obtained in English: \n");
    scanf("%f", &a);

    printf("marks obtained in Maths: \n");
    scanf("%f", &b);

    printf("marks obtained in Science: \n");
    scanf("%f", &c);

    printf("marks obtained in Social Studies: \n");
    scanf("%f", &d);

    printf("marks obtained in Hindi: \n");
    scanf("%f", &e);

    f = a + b + c + d + e;
    g = (f / 500) * 100;

    printf("Aggregate marks: %f\n", f);
    printf("Percentage marks: %f\n", g);
        return 0;
}

