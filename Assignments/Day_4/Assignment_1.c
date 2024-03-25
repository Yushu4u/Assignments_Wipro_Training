#include <stdio.h>
# define Max_Subjects 4
# define Max_Name_Length 50
# define Max_Phone_Length 15
# define Max_Address_Length 50


float calAvg(int marks[]){
    int totalMarks = 0;
    for (int i = 0; i < Max_Subjects; i++)
    {
        totalMarks += marks[i];
    }
    return (float)totalMarks/Max_Subjects;
}


float calPercentile(float avg, float classAvgs[]){
    float totalClassAvg = 0;
    for (int i = 0; i < Max_Subjects; i++)
    {
        totalClassAvg += classAvgs[i];
    }
    float classAvg = totalClassAvg/Max_Subjects;

    return (avg/classAvg)*100;
}



int main(){
    int rollNo;
    char name[Max_Name_Length];
    char gender;
    char phoneNo[Max_Phone_Length];
    char address[Max_Address_Length];
    int marks[Max_Subjects];
    float average, percentile;
    float classAverage[Max_Subjects];

    printf("Enter Your Roll No: ");
    scanf("%d", &rollNo);

    printf("Enter Your Name: ");
    scanf("%s", &name);

    printf("Enter Your Geneder: ");
    scanf(" %c", &gender);

    printf("Enter Your Phone Number: ");
    scanf("%s", &phoneNo);

    printf("Enter Your Address: ");
    scanf("%s", &address);

    printf("Enter Your Marks for Subjects M1, M2, M3, M4: ");
    for (int i = 0; i < Max_Subjects; i++)
    {
        scanf("%d", &marks[i]);
    }
    
    average = calAvg(marks);

    for(int i=0; i<Max_Subjects; i++){
        classAverage[i] = 75.0;
    }

    percentile = calPercentile(average, classAverage);

    printf("\nStudent Details:\n");
    printf("\nStudent Details:\n");
    printf("\nRoll_Number\tName\tGender\tMobile_Number\tAddress\tM1\tM2\tM3\tM4\tAvg\tPercentile\n");
    printf("-----------\t-----------\t-----------\t-----------\t-----------\t-----------\t-----------\t-----------\t-----------\t-----------\t\n");
    printf("%d\t%s\t%c\t%s\t%s\t%i\t%i\t%i\t%i\t%.2f\t%.2f%%\n", rollNo, name, gender, phoneNo, address, marks[0], marks[1], marks[2], marks[3], average, percentile);


   return 0; // Added return statement
}
