#include <iostream>
#include <string>

using namespace std;

class Student{
	private:
		string name;
		int studentId;

	public:

		Student():name(""), studentId(0) {}
		Student(const string & _name, int _studentId) : name(_name), studentId(_studentId){}

		void setName(const string & s1){
			name = s1;
		}

		void setStudentId(int s1){
			studentId = s1;
		}

		string getName()const{
			return name;
		}

		int getStudentId()const{
			return studentId;
		}


		void displayStudentInfo(){
			cout << name << " " << studentId;
		}
};

class Course{
	private:
		string courseName;
		vector<Student> students;



	public:

		Course() : courseName(""){}

		Course(const string & _courseName, vector<Student> _students) : courseName(_courseName), students(_students){}


		void setcourseName(const string & s1){
			courseName = s1;
		}   

		string getCourseName()const{
			return courseName;
		}

		void addStudent(Student newStudent){
			students.push_back(newStudent);
		}

		void removeStudent(int studentID){

		}

		void removeStudent(int studentID) {
			for (size_t i = 0; i < students.size(); i++) {
				if (students[i].getStudentId() == studentID) {
					students.erase(students.begin() + i);
					cout << "Student with ID " << studentID << " has been removed." << endl;
					break;
				}
			}

		}

		void displayCourseInfo(){
			cout << courseName << " ";
			for(size_t i = 0; i < students.size(); i++){
				students[i].displayStudentInfo();
			}
		}

};



int main() {

	Student student1("Alice", 101);
	Student student2("Bob", 102);
	Student student3("Charlie", 103);


	vector<Student> studentList = {student1, student2, student3};
	Course course("Mathematics", studentList);


	cout << "Initial course information:" << endl;
	course.displayCourseInfo();
	cout << endl;


	Student student4("David", 104);
	course.addStudent(student4);


	cout << endl << "After adding David:" << endl;
	course.displayCourseInfo();
	cout << endl;


	cout << endl << "Removing student with ID 102 (Bob):" << endl;
	course.removeStudent(102);


	cout << endl << "After removing Bob:" << endl;
	course.displayCourseInfo();
	cout << endl;

	return 0;
}
