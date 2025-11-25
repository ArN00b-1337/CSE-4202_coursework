#include <stdio.h>

 struct AAUB {
    char code[100];
    char title[100];
    float credit;
    float marks;
    float gradePoint;
} ;

float Grade(float marks) {
    if (marks >= 80) return 4.00;
     else if (marks >= 75) return 3.75;
    else if (marks >= 70) return 3.50;
      else if (marks >= 65) return 3.25;
       else if (marks >= 60) return 3.00;
      else if (marks >= 55) return 2.75;
      else if (marks >= 50) return 2.50;
    else if (marks >= 45) return 2.25;
    else if (marks >= 40) return 2.00;
    else return 0.00;
}


int main() {


struct AAUB courses[9] = {
          {"AVE4201", "Electric Circuit Analysis", 3.00},
        {"CSE4201", "Computer Programing and Applications",3.00},
        {"HUM4203", "BSS",3.00},
        {"MATH4203", "ODE & PDE", 3.00},
          {"CHEM4201","Chemistry", 3.00},
        {"CSE4202", "Computer Programming and Application Sessional",1.50},
         {"AVE4202","Electrical Circuit Analysis II Sessional",0.75},
         {"CHEM4202", "Chemistry Sessional",0.75},
        {"ASE4202", "Workshop Technology Sessional",1.50}

    };


float totalCredits = 0;
float totalGradePoints = 0;
float GPA;

for (int i = 0; i < 9; i++)
    {
        printf("Enter marks :");
        scanf("%f", &courses[i].marks);

        courses[i].gradePoint = Grade(courses[i].marks);

        totalCredits = totalCredits +courses[i].credit;
        totalGradePoints = totalGradePoints + (courses[i].gradePoint * courses[i].credit);

    }

    GPA = totalGradePoints / totalCredits;
    printf("Your total credit is 19.50\n");
    printf("Grade Point Average is: %f", GPA);

}



