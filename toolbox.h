//
// Created by Mr-Mas on 19.01.2023.
//

#ifndef GPA_CALCULATOR_FOR_ISTANBUL_TICARET_UNIVERSITY_TOOLBOX_H
#define GPA_CALCULATOR_FOR_ISTANBUL_TICARET_UNIVERSITY_TOOLBOX_H
#include <stdio.h>
#include <stdlib.h>
#if defined(_WIN32) || defined(_WIN64) || defined(__CYGWIN__) || defined(__MINGW32__) || defined(__MINGW64__)
#include <windows.h>
#else
#include <unistd.h>
#include <termios.h>
#endif
#define minsize 10

int number_of_courses, list=0;
short X=2, Y=10;
char course_code[minsize];
float grade_points, course_credits, total_grade_points=0, total_credits=0, grade_point_average;

extern void SetCursorPosition(short x, short y)
{
#if defined(_WIN32) || defined(_WIN64) || defined(__CYGWIN__) || defined(__MINGW32__) || defined(__MINGW64__)
    COORD coordinates = {x, y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
#else
    printf("\033[%d;%dH", y + 1, x + 1);
#endif
}
#endif //GPA_CALCULATOR_FOR_ISTANBUL_TICARET_UNIVERSITY_TOOLBOX_H
