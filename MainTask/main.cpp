#include "students.h"

int main() {
	Student* st1 = nullptr;
	Student* st2 = nullptr;

	st1 = new Student;

	st1->name = "Veronika";
	st1->age = 14;
	st1->mark = 9.2;
	st1->alive = true;
	   
	st2->name = "Danik";
	st2->name = 15;
	st2->mark = 9.99;
	st2->alive = false;


	cout << "Before: " << endl;
	cout << st1->getString() << endl;
	cout << st2->getString() << endl;
	
	st1 = st2;
	st1->name = "Bogdan";

	cout << "Before: " << endl;
	cout << st1->getString() << endl;
	cout << st2->getString() << endl;
		

	return 0;
}