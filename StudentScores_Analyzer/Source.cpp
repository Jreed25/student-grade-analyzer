#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


const int NUM_TESTS = 3, MAX_STUDENTS = 100;


void findAverage(const int[][NUM_TESTS], double[], int);

void displayList(string[], const double[], const int);

void selectionSort(string[], double averages[], const int size);


int main()
{
	string studentNames[MAX_STUDENTS];
	int studentTests[MAX_STUDENTS][NUM_TESTS];
	double averages[MAX_STUDENTS];
	
	int count;
	int students1;
	


	
	do 
	{
	cout << "This program is used to average students test scores for 3 tests up to a maximum of 100 students.\n";
	
	
	cout << "How many students are there?";
	cin >> students1;


	if (students1 > 100 || students1 < 1)

	{
		cout << "Invalid input please enter a number between 1-100.\n";

	}
	
	} while (students1 > 100 || students1 < 1);
		

	for (count = 0; count < students1; count++)
	{
		cout << "Enter the name of student #" << (count + 1) << ": ";
		cin.ignore();
		getline(cin, studentNames[count]);
		cout << studentNames[count] << "\n";


		do
		{
			cout << "Enter the score [1-100] for test #"
				<< (index + 1) << " of student "
				<< studentNames[count] << ": ";
			cin >> studentTests[count][index];

			if (studentTests[count][index] < 1 ||
				studentTests[count][index] > 100)
			{
				cout << "Invalid score. Enter a value between 1 and 100.\n";
			}

		} while (studentTests[count][index] < 1 ||
				studentTests[count][index] > 100);
	}


	findAverage(studentTests, averages, students1);
	
	
	selectionSort(studentNames, averages, students1);

	displayList(studentNames, averages, students1);

	

	return 0;
}



void findAverage(const int tests1[][tests], double average[], int size)
{
	int student, test;
	double total = 0;

	
	for (student = 0; student < size; student++)
	{
		total = 0;
		for (test = 0; test < tests; test++)
		{
			
			total += tests1[student][test];
			
			average[student] = total / tests;

			
		}
		
		
	}

}


void displayList(string names[], const double averages[], const int size)
{
	
	cout << "These are the tests scores after sorting them highest to lowest.\n";


	int student;
	for (student = 0; student < size; student++)
	{
		cout << fixed << showpoint << setprecision(2);
		

		cout << (student + 1) << ". " << names[student]  << setw(8) << "--> " << averages[student] << "\n";
	}


}


// Sorts students by average grades
void selectionSort(string names[], double averages[], const int size)
{
	int start, maxIndex; 
	double maxValue;
	string maxValue1;

	for (start = 0; start < (size - 1); start++)
	{
		maxIndex = start;
		maxValue = averages[start];
		maxValue1 = names[start];
		
		
		for (int index = start + 1; index < size; index++)
		{
			if (averages[index] > maxValue)
			{
				maxValue = averages[index];
				maxValue1 = names[index];
				maxIndex = index;
				
			}
		}
		averages[maxIndex] = averages[start];
		averages[start] = maxValue;
		names[maxIndex] = names[start];
		names[start] = maxValue1;
	}

}