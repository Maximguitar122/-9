#include <iostream>
#include <set>
#include <string>
using namespace std;

class Student {
	string name;
	int num;
public:
	Student(string n, int nu){
		name = n;
		num = nu;
	}
	string GetName() const {
		return name;
	}
	int GetAge() const {
		return num;
	}
	bool operator <(const Student& other) const {
		return num < other.num;
	}
};
int main() {
	set<Student> students;
	students.insert(Student("Max", 1));
	students.insert(Student("Dan", 2));
	students.insert(Student("Lie", 3));
	cout << "List of Students\n";
	for (const auto& s : students) {
		cout << s.GetAge() << "\n";
		cout << s.GetName() << "\n";

	}
	Student search("", 3);
	auto found = students.find(search);

}
