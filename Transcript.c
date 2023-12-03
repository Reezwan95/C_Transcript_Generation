#include <stdio.h>
#include <string.h>
#include <math.h>


//write different functions for different course
//use if-else for each course after the input
//use iterative loops for calculating individual marks and adding to the main grade mark

//for course 1//
void grade_1(double initialComponent1, double initialComponent2, double initialComponent3, double initialComponent4){


double course1 = 0, course1_component1Final = 0, course1_component2Final = 0, component1 = 0, course1_component3Final = 0, course1_component4Final = 0, component2 = 0, component3 = 0, component4 = 0;
//char *course[100];
//nunu dudu reezy chamay eazy yeezy sexy pissy

//for the fist component of the grade//
//printf("Enter your mark for the first component: \n");
//scanf("%lf", &component1);
course1_component1Final = ((component1) / 100) * 5;

//for the second component of the grade//
//printf("Enter your mark for the second component: \n");
//scanf("%lf", &component2);
course1_component2Final = ((component2) / 100) * 15;

//for the third component of the grade//
//printf("Enter your mark for the third component: \n");
//scanf("%lf", &component3);
course1_component3Final = ((component3) / 100) * 30;

//for the fourth componet of the grade//
//printf("Enter your mark for the fourth component: \n");
//scanf("%lf", &component4);
course1_component4Final = ((component4) / 100) * 50;

//formula to calculate the total grade//

course1 = (course1_component1Final) + (course1_component2Final) + (course1_component3Final) + (course1_component4Final);
//const GPA_1 = 3.7;
printf("Your marks for MIE100 is: %lf\n", course1);


//printf("Your grade for %s is %0.2lf\n", course1, c1);

}

int main(void){

double component1 = 0, component2 = 0, component3 = 0, component4 = 0;
printf("Please enter the mark in decimals, not percentages!\n");

char firstname[100];
printf("Please enter your first name: \n");
scanf("%s", firstname);

char lastname[100];
printf("Please enter your last name: \n");
scanf("%s", lastname);

char courseName[100];
printf("Enter course name: \n");
scanf("%s", courseName);
char course_1[] = "MIE100";
//char course_2[] = "ECE110";

if (strcmp(courseName, course_1) == 0){

    printf("Enter marks for the assignments: \n");
    scanf("%lf", &component1);
    printf("Enter marks for the quiz: \n");
    scanf("%lf", &component2);
    printf("Enter marks for the midterm: \n");
    scanf("%lf", &component3);
    printf("Enter marks for the final exam: \n");
    scanf("%lf", &component4);
    grade_1(component1, component2, component3, component4);

}
    
//double GPA, GPA_1, GPA_2, GPA_3, GPA_4, GPA_5, GPA_6;




/*

//assigning GPA to course 1

if (c1 >= 85) {
    double const GPA_1 = 4.0;
} else if (80 <= c1 <= 84) {
    double const GPA_1 = 3.7;
} else if (77 <= c1 <= 79){
    double const GPA_1 = 3.3;
} else if (73 <= c1 <= 76){
    double const GPA_1 = 3.0;
} else if (70 <= c1 <= 72){
    double const GPA_1 = 2.7;
} else if (67 <= c1 <= 69){
    double const GPA_1 = 2.3;
} else if (63 <= c1 <= 66){
    double const  GPA_1 = 2.0;
} else if (60 <= c1 <= 62){
    double const GPA_1 = 1.7;
} else if (57 <= c1 <= 59){
    double GPA_1 = 1.3;
} else if (53 <= c1 <= 56){
    double const GPA_1 = 1.0; 
} else if (50 <= c1 <= 52){
    double const GPA_1 = 0.7;
} else if (c1 <= 49){
    double const GPA_1 = 0.0;
}


//To calculate Sessional GPA//
//double GPA = (0.5*(GPA_1 + GPA_2 + GPA_3))/1.5;
//printf("Your GPA for this session is: %lf", GPA);


////////////////Use functions, switch statements, arguments to shorten code/////////////////

*/
return 0;
}