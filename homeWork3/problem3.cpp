#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>  // for sort

using namespace std;

double compute_average(vector<double> hw, const vector<double> &exam) {
    double sum = 0.0, exams = 0.0, totalWeight1 = 0.0;
    double sum2 = 0.0, midterm = 0.0, finalexam = 0.0, totalWeight2 = 0.0;


    sort(hw.begin(), hw.end());


    for(size_t i = 2; i < hw.size(); i++) {
        sum += 0.5 * hw[i];  
    }
    for(size_t i = 0; i < exam.size(); i++) {
        exams += 0.25 * exam[i];  
    }

    totalWeight1 = sum + exams;


    for(size_t i = 2; i < hw.size(); i++) {
        sum2 += .7 * hw[i];
    }
    midterm = 0.1 * exam[0];
    finalexam = 0.2 * exam[1];
    totalWeight2 = sum2 + midterm + finalexam;

    if (totalWeight1 > totalWeight2) {
        cout << "Scheme I" << endl;
        return totalWeight1;
    } else {
        cout << "Scheme II" << endl;
        return totalWeight2;
    }
}

void read_grades(vector<double> &hw, vector<double> &exam) { 
    int i = 0, j = 0;
    double input, input2;

    cout << "Please enter homework grades (0 - 100): ";
    while (i < hw.size()) {
        cin >> input;
        hw[i] = input;
        i++;
    }

    cout << endl << "Please enter exam grades: ";
    while (j < exam.size()) {
        cin >> input2;
        exam[j] = input2; 
        j++;
    }


    vector<double> hw_sorted = hw;
    sort(hw_sorted.begin(), hw_sorted.end());
    double lowest1 = hw_sorted[0];
    double lowest2 = hw_sorted[1];


    for (size_t i = 0; i < hw.size(); i++) {
        cout << setw(12) << right << "Homework " << i + 1 << setw(8) << hw[i];
        if (hw[i] == lowest1 || hw[i] == lowest2) {
            cout << " (Dropped)";

        }
        cout << endl;
    }


    cout << setw(13) << right << "Midterm Exam" << setw(8) << exam[0] << endl;
    cout << setw(13) << right << "Final Exam" << setw(8) << exam[1] << endl;
}

int main() 
{

    vector<double> hw(6);
    vector<double> exam(2); 
    read_grades(hw, exam);

    double average = compute_average(hw, exam);
    cout << "The average grade is " << average << "." << endl;
    return 0;
}
