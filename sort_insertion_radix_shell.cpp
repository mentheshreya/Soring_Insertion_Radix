#include <iostream>
#include <string>
using namespace std;
class Student {
public:
int roll_no;
string name;
float sgpa;
void input(Student s[], int n) {
for (int i = 0; i < n; i++) {
cout << "Enter roll_No: ";
cin >> s[i].roll_no;
cout << "Enter name: ";
cin >> s[i].name;
cout << "Enter the SGPA: ";
cin >> s[i].sgpa;
}
}
void display(Student s[], int n) {
cout << "Roll_No\tName\tSGPA\n";
for (int i = 0; i < n; i++) {
cout << s[i].roll_no << "\t" << s[i].name << "\t" << s[i].sgpa << endl;
}
}
// Insertion Sort
void insertionSort(Student s[], int n) {
for (int i = 1; i < n; i++) {
Student key = s[i];
int j = i - 1;
while (j >= 0 && s[j].roll_no > key.roll_no) {
s[j + 1] = s[j];
j--;
}
s[j + 1] = key;
}
}
// Shell Sort
void shellSort(Student s[], int n) {
for (int gap = n / 2; gap > 0; gap /= 2) {
for (int i = gap; i < n; i++) {
Student temp = s[i];
int j;
for (j = i; j >= gap && s[j - gap].name > temp.name; j -= gap) {
s[j] = s[j - gap];
}
s[j] = temp;
}
}
}
// Radix Sort
void countingSortBySGPA(Student s[], int n, int exp) {
Student output[n];
int count[10] = {0};
for (int i = 0; i < n; i++) {
count[(int(s[i].sgpa * 100) / exp) % 10]++;
}
for (int i = 1; i < 10; i++) {
count[i] += count[i - 1];
}
for (int i = n - 1; i >= 0; i--) {
output[count[(int(s[i].sgpa * 100) / exp) % 10] - 1] = s[i];
count[(int(s[i].sgpa * 100) / exp) % 10]--;
}
for (int i = 0; i < n; i++) {
s[i] = output[i];
}
}
void radixSortBySGPA(Student s[], int n) {
float max_sgpa = s[0].sgpa;
for (int i = 1; i < n; i++) {
if (s[i].sgpa > max_sgpa) {
max_sgpa = s[i].sgpa;
}
}
for (int exp = 1; int(max_sgpa * 100) / exp > 0; exp *= 10) {
countingSortBySGPA(s, n, exp);
}
cout << "Top 10 Students by SGPA:\n";
cout << "Roll_No\tName\tSGPA\n";
for (int i = n - 1; i >= max(0, n - 10); i--) {
cout << s[i].roll_no << "\t" << s[i].name << "\t" << s[i].sgpa << endl;
}
}
};
int main() {
int n;
cout << "Enter number of students: ";
cin >> n;
Student s[n], c;
int choice;
char ch;
do {
cout << "--------------------------------------------\n";
cout << "STUDENT DATABASE\n";
cout << "1. Input Student Details\n";
cout << "2. Arrange list of students in ascending order by Roll No (Insertion Sort)\n";
cout << "3. Arrange list of students alphabetically by Name (Shell Sort)\n";
cout << "4. Arrange list of students to find top 10 by SGPA (Radix Sort)\n";
cout << "5. Display Students\n";
cout << "Enter your choice: ";
cin >> choice;
switch (choice) {
case 1:
c.input(s, n);
break;
case 2:
c.insertionSort(s, n);
cout << "Sorted by Roll No (Insertion Sort):\n";
c.display(s, n);
break;
case 3:
c.shellSort(s, n);
cout << "Sorted by Names (Shell Sort):\n";
c.display(s, n);
break;
case 4:
c.radixSortBySGPA(s, n);
break;
case 5:
c.display(s, n);
break;
default:
cout << "Invalid choice!\n";
}
cout << "--------------------------------------------\n";
cout << "Enter y to continue: ";
cin >> ch;
} while (ch == 'y');
return 0;
}