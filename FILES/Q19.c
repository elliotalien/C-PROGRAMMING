/*Q19.Write an algorithm to implement a grading system, The grading works in the following manner

A: marks equal and above 90,
B: marks equal to 80 and less than 90,
C: marks equal to 70 and less than 80,
D: marks equal to 70 and less than 80,
E:Less than 60"


*/

int main() {
    int marks;
    char grade;

    
    printf("Enter the marks: ");
    scanf("%d", &marks);

    if (marks >= 90) {
        grade = 'A';
    } else if (marks >= 80) {
        grade = 'B';
    } else if (marks >= 70) {
        grade = 'C';
    } else if (marks >= 60) {
        grade = 'D';
    } else {
        grade = 'E';
    }
    printf("The grade is: %c\n", grade);

    return 0;
}