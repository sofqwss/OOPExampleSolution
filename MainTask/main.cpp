#include "students.h"

int main() {
	int n = 0;

	Student st1, st2;

	st1.name = "Veronika";
	st1.age = 14;
	st1.mark = 9.2;
	st1.alive = true;

	st2.name = "Danik";
	st2.name = 15;
	st2.mark = 9.99;
	st2.alive = false;

	Student st = st1.mark > st2.mark ? st1 : st2;

	cout << "Best student is " << st.name << ".\n";

	return 0;
}