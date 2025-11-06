#include <stdio.h>
int main() {
int n, i = 1, choice;
n → number of students

i → used for counting or looping

choice → to store the user’s menu choice.
float total1 = 0, total2 = 0, total3 = 0, classTotal = 0;
    float avg1, avg2, avg3, classAvg;
Each student’s total (total1, total2, total3)

Each student’s average (avg1, avg2, avg3)

The overall class total and average
printf("Enter number of students: ");
    scanf("%d", &n);
printf("Enter marks for Subject 1: ");
        scanf("%f", &s1);
        printf("Enter marks for Subject 2: ");
        scanf("%f", &s2);
        printf("Enter marks for Subject 3: ");
        scanf("%f", &s3);
total3 = s1 + s2 + s3;
        avg3 = total3 / 3.0;
    }
if (n >= 1)
                printf("Student 1 -> Total: %.2f, Average: %.2f\n", total1, avg1);
            if (n >= 2)
                printf("Student 2 -> Total: %.2f, Average: %.2f\n", total2, avg2);
            if (n >= 3)
                printf("Student 3 -> Total: %.2f, Average: %.2f\n", total3, avg3);
else if (choice == 2) {
            classTotal = total1 + total2 + total3;
            classAvg = classTotal / (n * 3.0);
return 0;
}
