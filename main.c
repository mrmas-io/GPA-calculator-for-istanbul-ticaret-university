#include "toolbox.h"

void gpa();
void grade_scale();
int main()
{
    printf("\033c");
    //printf("\e[1;1H\e[2J");

    SetCursorPosition(50, 0);
    printf("GPA Calculator For Istanbul Ticaret University");

    grade_scale();
    gpa();
}
void gpa()
{
    SetCursorPosition(2, 2);
    printf("Enter the number of courses : ");
    scanf("%d", &number_of_courses);

    SetCursorPosition(2, 4);
    printf("%c Use the grade point associated with your letter grade as shown in ", 0x1A);
    SetCursorPosition(2, 5);
    printf(" the table on the right side.");

    SetCursorPosition(2, 6);
    printf("%c Enter your Course Code, Grade Point, and Course Credit Hours.", 0x1A);
    SetCursorPosition(2, 7);
    printf("%c For Example :\tMATH112   3.50   7.0", 0x1A);


    SetCursorPosition(2, 9);
    printf("\t\tCOURSE CODE  \t  GRADE POINT  \t  CREDITS");
    for (int i = 1; i <= number_of_courses; i++)
    {
        SetCursorPosition(X, Y+=2);
        printf("%c Course %d - ", 0xAF, ++list);
        SetCursorPosition(18, Y);
        scanf("%s", course_code);
        SetCursorPosition(36, Y);
        scanf("%f", &grade_points);
        SetCursorPosition(53, Y);
        scanf("%f", &course_credits);

        total_credits += course_credits;
        total_grade_points += course_credits * grade_points;
    }

    grade_point_average = total_grade_points / total_credits;
    SetCursorPosition(X, Y+=2);
    printf("Your GPA is %.2f", grade_point_average);

    SetCursorPosition(0, 32);
    printf("\n");
}
void grade_scale()
{
    SetCursorPosition(105, 2);
    printf("GRADING SCALE");
    SetCursorPosition(79, 4);
    printf("Letter Grades \t ECTS  \t  4-point System \t Percentage");
    SetCursorPosition(85, 6);
    printf("AA \t   A \t\t 4.00 \t\t   91 - 100");
    SetCursorPosition(85, 8);
    printf("BA \t   B \t\t 3.75 \t\t   81 - 90");
    SetCursorPosition(85, 10);
    printf("BB \t   C \t\t 3.50 \t\t   71 - 80");
    SetCursorPosition(85, 12);
    printf("CB \t   D \t\t 3.00 \t\t   61 - 70");
    SetCursorPosition(85, 14);
    printf("CC \t   D \t\t 2.50 \t\t   51 - 60");
    SetCursorPosition(85, 16);
    printf("CD \t   E \t\t 2.00 \t\t   41 - 50");
    SetCursorPosition(85, 18);
    printf("DD \t   FX \t\t 1.50 \t\t   36 - 40");
    SetCursorPosition(85, 20);
    printf("DF \t   FX \t\t 1.00 \t\t   31 - 35");
    SetCursorPosition(85, 22);
    printf("FF \t   F \t\t 0.00 \t\t   00 - 30");
    SetCursorPosition(85, 24);
    printf("IA \t   - \t\t 0.00 \t\t   DISCONTINUED");
}