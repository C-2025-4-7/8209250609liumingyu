#include<iostream>
using namespace std;
class student {
public:
	int id;
	int score;
	student(int i = 0, int s = 0) {
				id = i;
				score = s;
	}
};
void max(student* p, int size) {
	student* max_student = p;
	for (int i = 1; i < size; i++) {
		if ((p + i)->score > max_student->score) {
			max_student = p + i;
		}
	}
	cout << "ID: " << max_student->id << ", Score: " << max_student->score << endl;
}
int main() {
	student stud[5] = {
		student(1, 85),
		student(2, 92),
		student(3, 78),
		student(4, 90),
		student(5, 88)
	};
	max(stud, 5);
	return 0;
}
