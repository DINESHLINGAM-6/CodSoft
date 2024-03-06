#include <iostream>

using namespace std;

int main() {
  const int MAX_STUDENTS = 100; 
  int num_students;
  int grades[MAX_STUDENTS]; 

  
  cout << "Enter the number of students (maximum " << MAX_STUDENTS << "): ";
  cin >> num_students;

  
  if (num_students < 1 || num_students > MAX_STUDENTS) {
    cout << "Invalid number of students, please enter a value between 1 and " << MAX_STUDENTS << endl;
    return 1; 
  }

  
  for (int i = 0; i < num_students; ++i) {
    int grade;

    cout << "Enter student " << i + 1 << " grade (0-100): ";
    cin >> grade;

    
    if (grade < 0 || grade > 100) {
      cout << "Invalid grade, please enter a value between 0 and 100." << endl;
      return 1; 
    }

    grades[i] = grade; 
  }

 
  int total = 0;
  for (int i = 0; i < num_students; ++i) {
    total += grades[i];
  }
  double average = static_cast<double>(total) / num_students;

 
  int highest = grades[0];
  int lowest = grades[0];
  for (int i = 1; i < num_students; ++i) {
    if (grades[i] > highest) {
      highest = grades[i];
    }
    if (grades[i] < lowest) {
      lowest = grades[i];
    }
  }

  cout << "Average Grade: " << average << endl;
  cout << "Highest Grade: " << highest << endl;
  cout << "Lowest Grade: " << lowest << endl;

  return 0;
}
