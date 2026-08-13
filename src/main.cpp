#include <iostream>
#include <iomanip>
#include <string>
#include <limits>


const int NUM_TESTS = 3;
const int MAX_STUDENTS = 100;
const int MAX_SCORE = 100;


void findAverage(const int[][NUM_TESTS], double[], int);

void displayList(std::string[], const double[], int);

void selectionSort(std::string[], double[], int);


int main()
{
	std::string studentNames[MAX_STUDENTS];
	int studentTests[MAX_STUDENTS][NUM_TESTS];
	double averages[MAX_STUDENTS];
	
	int count;
	int studentCount;
	


	
	do 
	{
	std::cout << "This program is used to average students test scores for 3 tests up to a maximum of 100 students.\n";
	
	
	std::cout << "How many students are there?";
	std::cin >> studentCount;


	if (studentCount > MAX_STUDENTS || studentCount < 1)

	{
		std::cout << "Invalid input please enter a number between 1-100.\n";

	}
	
	} while (studentCount > MAX_STUDENTS || studentCount < 1);
		

	for (count = 0; count < studentCount; count++)
	{
		std::cout << "Enter the name of student #" << (count + 1) << ": ";

		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::getline(std::cin, studentNames[count]);


		for (int index = 0; index < NUM_TESTS; index++)
    	{
			do
			{
				std::cout << "Enter the score [0-100] for test #"
				<< (index + 1) << " of student "
				<< studentNames[count] << ": ";
				std::cin >> studentTests[count][index];

				if (studentTests[count][index] < 0 ||
				studentTests[count][index] > MAX_SCORE)
				{
					std::cout << "Invalid score. Enter a value between 0 and 100.\n";
				}

			} while (studentTests[count][index] < 0 ||
					studentTests[count][index] > MAX_SCORE);
		}
	}


	findAverage(studentTests, averages, studentCount);
	
	
	selectionSort(studentNames, averages, studentCount);

	displayList(studentNames, averages, studentCount);

	

	return 0;
}



void findAverage(const int tests1[][NUM_TESTS], double average[], int size)
{
	int student, test;
	double total = 0;

	
	for (student = 0; student < size; student++)
	{
		total = 0;
		for (test = 0; test < NUM_TESTS; test++)
		{
			
			total += tests1[student][test];
			
		}

		average[student] = total / NUM_TESTS;
	}

}


void displayList(std::string names[], const double averages[], const int size)
{
	
	std::cout << "Students sorted by average score, highest to lowest:\n";

	int student;

	std::cout << std::fixed << std::setprecision(2);

	for (student = 0; student < size; student++)
	{
		std::cout << (student + 1) << ". " << names[student]  << std::setw(8) << "--> " << averages[student] << "\n";
	}


}


// Sorts students by average grades
void selectionSort(std::string names[], double averages[], const int size)
{
	int start, maxIndex; 
	double maxValue;
	std::string maxName;

	for (start = 0; start < (size - 1); start++)
	{
		maxIndex = start;
		maxValue = averages[start];
		maxName = names[start];
		
		
		for (int index = start + 1; index < size; index++)
		{
			if (averages[index] > maxValue)
			{
				maxValue = averages[index];
				maxName = names[index];
				maxIndex = index;
				
			}
		}
		averages[maxIndex] = averages[start];
		averages[start] = maxValue;
		names[maxIndex] = names[start];
		names[start] = maxName;
	}

}