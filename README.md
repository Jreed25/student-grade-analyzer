# Student grade analyzer

A C++ program that accepts 1–100 students, collects three test scores for each student, calculates their averages, and displays the results from highest to lowest.

## Features

* Accepts 1–100 students
* Stores student names and three test scores
* Calculates each student's average score
* Sorts students by average score from highest to lowest
* Validates the number of students entered

## Concepts Demonstrated

* Arrays and 2D arrays
* Functions and function prototypes
* Passing arrays to functions
* Selection sort
* String handling
* Input validation
* Basic data processing

## Project Structure

```text
student-grade-analyzer/
└── src/
  └── main.cpp
```

## How to run

Compile the program with:

```bash
g++ src/main.cpp -o main
```

Run it with:

```bash
./main
```

## Example

```text
This program is used to average students test scores for 3 tests up to a maximum of 100 students.
How many students are there?2
Enter the name of student #1: JR
JR
Enter the score [0-100] for test #1 of student JR:
25
Enter the score [0-100] for test #2 of student JR:
50
Enter the score [0-100] for test #3 of student JR: 
75
Enter the name of student #2: Jeremy
Jeremy
Enter the score [0-100] for test #1 of student Jeremy:
22
Enter the score [0-100] for test #2 of student Jeremy:
31
Enter the score [0-100] for test #3 of student Jeremy:
41
Students sorted by average score, highest to lowest:
1. JR    --> 50.00
2. Jeremy    --> 31.33
```
