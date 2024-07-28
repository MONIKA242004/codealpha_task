#include <iostream>
using namespace std;
float calculateCGPA(float grades[], int numSubjects) {
    float totalGradePoints = 0.0;
    for (int i = 0; i < numSubjects; i++) {
        totalGradePoints += grades[i];
    }
    return totalGradePoints / numSubjects;
}

int main() {
    const int numSubjects = 5;
    float grades[numSubjects] = {8.5, 9.0, 7.5, 8.0, 9.5};

    cout << "Grade points for the subjects are: ";
    for (int i = 0; i < numSubjects; i++) {
        cout << grades[i] << " ";
    }
    cout << endl;
    float cgpa = calculateCGPA(grades, numSubjects);

    cout << "Your CGPA is: " << cgpa << endl;

    return 0;
}
