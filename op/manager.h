#pragma once
#include "Student.h"

class Manager {
public:
	float calcStudentAvgAge(Student* list, int size);
	float calcStudentAvgMark(Student* list, int size);
	Student findBestStudent(Student* list, int size);
	Student findWorstStudent(Student* list, int size);

};