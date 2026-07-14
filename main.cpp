#include <iostream>
#include <iomanip>   // for std::fixed and std::setprecision

int main() {
	int scores[30] = { 2, 45, 7, 89, 23, 56, 14, 78, 32, 65, 91, 4, 67, 28, 98, 5, 41, 82, 19, 73, 39, 60, 8, 94, 50, 21, 87, 34, 62, 99 };

	double sum = 0;

	for (int i = 0; i < 30; i++) {
		sum += scores[i];
	}

	double avgScore = sum / 30;

	std::cout << "the average score of all of the students is " << avgScore << std::endl;

	int highestScore = scores[0];

	for (int i = 1; i < 30; i++) {

		if (scores[i] > highestScore) {
			highestScore = scores[i];
		}

	}

	std::cout << "the highest score of all of the students is " << highestScore << std::endl;


	int lowestScore = scores[0];

	for (int i = 1; i < 30; i++) {

		if (scores[i] < lowestScore) {
			lowestScore = scores[i];
		}
	}
	std::cout << "the lowest score of all of the students is " << lowestScore << std::endl;
	int passingStudents = 0;

	for (int i = 0; i < 30; i++) {

		if (scores[i] > 60) {
			passingStudents++;
		}


	}
	std::cout << "the number of passing students is " << passingStudents << std::endl;

	int aStudents = 0;

	for (int i = 0; i < 30; i++) {
		if (scores[i] > 90) {
			aStudents++;
		}

	}
	std::cout << "the number of students that have A's (90+) is " << aStudents << std::endl;

	std::cout << "Scores in original order " << std::endl;
	for (int score : scores) {
		std::cout << score << " ";	
	}
	std::cout << std::endl;

	std::cout << "Scores in reverse order " << std::endl;
	for (int i = 29;i >= 0; --i) {
		std::cout << scores[i] << " ";

	}
	std::cout << std::endl;
return 0;
}
