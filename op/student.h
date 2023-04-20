#pragma once
#include "main.h"

class Student {
private:
	string name;
	string surname;
	int age;
	float avg_mark;
public:


	// default constructor
	Student() {
		cout << "default constructor" << endl;
		name = "no name";
		surname = "no surname";
		age = 15;
		avg_mark = 4;
	}

	// constructor with arguments
	Student(string nm, string surnm, int a, float mark) {
		cout << "constructor with arguments" << endl;
		name = nm;
		surname = surnm;
		age = a;
		avg_mark = mark;
	}

	// constructor with arguments
	Student(string nm, string surnm) {
		cout << "constructor with arguments" << endl;
		name = nm;
		surname = surnm;
		age = 15;
		avg_mark = 4;
	}

	// copy-constructor
	Student(const Student& student) {
		cout << "copy-constructor" << endl;
		name = student.name;
		surname = student.surname;
		age = student.age;
		avg_mark = student.avg_mark;
	}


	~Student() {
		cout << "destructor" << endl;
	}

	void clear() {
		name = "no name";
		surname = "no surname";
		age = 0;
		avg_mark = 0;
	}

	string convert() {
		string msg = "";
		msg += name;
		msg += " " + surname;
		msg += " ( age = " + to_string(age);
		msg += ", average mark = " + to_string(avg_mark);
		msg += ")";
		return msg;
	}
};

