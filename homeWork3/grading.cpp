#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>  

using namespace std;

double compute_average(const vector<double> &hw, const vector<double> &exam) {
    vector<double> hw_copy = hw;  
    double sum = 0.0, exams = 0.0, totalWeight1 = 0.0;
    double sum2 = 0.0, midterm = 0.0, finalexam = 0.0, totalWeight2 = 0.0;

    sort(hw_copy.begin(), hw_copy.end());  

    for(size_t i = 2; i < hw_copy.size(); i++) {
        sum += hw_copy[i];  
    }
    double average_hw = sum / (hw_copy.size() - 2);  
    double weighted_hw1 = average_hw * 0.5;  

    for(size_t i = 0; i < exam.size(); i++) {
        exams += 0.25 * exam[i];  
    }

    totalWeight1 = weighted_hw1 + exams;

    sum2 = 0.0;  
    for(size_t i = 2; i < hw_copy.size(); i++) {
        sum2 += hw_copy[i];  
    }
    double average_hw2 = sum2 / (hw_copy.size() - 2);  
    double weighted_hw2 = average_hw2 * 0.7;  
    midterm = 0.1 * exam[0];
    finalexam = 0.2 * exam[1];
    totalWeight2 = weighted_hw2 + midterm + finalexam;

    if (totalWeight1 > totalWeight2) {
        cout << "Scheme I is used" << endl;
        return totalWeight1;
    } else {
        cout << "Scheme II is used" << endl;
        return totalWeight2;
    }
}

void read_grades(vector<double> &hw, vector<double> &exam) { 
	int i = 0, j = 0;
	double input, input2;

	cout << "Please enter homework grades 0-100: ";
	while (i < hw.size()) {
		cin >> input;
		hw[i] = input;
		i++;
	}

	cout << endl << "Please enter exam grades 0-100: ";
	while (j < exam.size()) {
		cin >> input2;
		exam[j] = input2; 
		j++;
	}


	vector<double> hw_sorted = hw;
	sort(hw_sorted.begin(), hw_sorted.end());
	double lowest1 = hw_sorted[0];
	double lowest2 = hw_sorted[1];


	int dropped_count = 0; 

	for (size_t i = 0; i < hw.size(); i++) {
		cout << setw(12) << right << "Homework " << i + 1 << setw(8) << hw[i];


		if ((hw[i] == lowest1 || hw[i] == lowest2) && dropped_count < 2) {
			cout << " (Dropped)";
			dropped_count++;
		}

		cout << endl;
	}


	cout << setw(13) << right << "Midterm Exam" << setw(8) << exam[0] << endl;
	cout << setw(13) << right << "Final Exam" << setw(8) << exam[1] << endl;
}


int main() // for help with grading
{
	// declare containers for different grade items
	vector<double> hw(6);
	vector<double> exam(2); // contains midterm and final
	read_grades(hw, exam); // read grades from the user
			       // compute average based on two grading schemes
			       // print items to the console, including dropped situation
	double average = compute_average(hw, exam);
	// output average grade
	cout << "The average grade is " << average << "." <<
		endl;
	return 0;
}
