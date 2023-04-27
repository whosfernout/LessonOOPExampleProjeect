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
	Student() {}

	// constructor with arguments
	Student(string nm, string surnm, int a, float mark) {}

	// constructor with arguments
	Student(string nm, string surnm) {}

	// copy-constructor
	Student(const Student& student) {}


	~Student() {}

	void clear() {}

	string convert() {}
};

