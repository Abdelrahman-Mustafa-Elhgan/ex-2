#include <iostream>
#include <array>
#include <algorithm> // std::max_element, std::_min_element
using namespace std;

int main() {
    array<int, 5> grades;

    // Input grades
    cout << "Enter 5 Students Grades: \n";
    for (int i = 0; i < grades.size(); i++)
    {
        cout << "Student " << i + 1 << ": ";
        cin >> grades[i];
    }

    // total
    int sum = 0;
    for (int grade : grades)
    sum += grade;
    
    // output max, min grade
    int maxGrade = *max_element(grades.begin(), grades.end());
    int minGrade = *min_element(grades.begin(), grades.end());


    // results output
    cout << "\n------ Results ------\n";
    cout << "The Midd: " << (sum / static_cast<float>(grades.size())) << endl;
    cout << "Max Grade: " << maxGrade << endl;
    cout << "Min Grade: " << minGrade << endl;
    

    return 0;
}