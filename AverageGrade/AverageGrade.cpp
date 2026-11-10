#include <iostream>
using namespace std;

// Function prototypes
void displayTitle();
void getScores(int& s1, int& s2, int& s3, int& s4, int& s5);
double calculateAverage(int s1, int s2, int s3, int s4, int s5);
char determineGrade(double average);

int main()
{
    int score1, score2, score3, score4, score5;
    double average;
    char grade;

    displayTitle();

    getScores(score1, score2, score3, score4, score5);

    average = calculateAverage(score1, score2, score3, score4, score5);

    grade = determineGrade(average);

    cout << "The average score is " << average << endl;
    cout << "The average grade is " << grade << endl;

    cout << "--------------------------------" << endl;

    return 0;
}

// Function 1: No arguments, no return value
void displayTitle()
{
    cout << "Find Average for 5 Scores" << endl;
    cout << "--------------------------------" << endl;
}

// Function 2: Arguments, no return value
void getScores(int& s1, int& s2, int& s3, int& s4, int& s5)
{
    int* scores[5] = { &s1, &s2, &s3, &s4, &s5 };

    for (int i = 0; i < 5; i++)
    {
        do
        {
            cout << "Enter score: ";
            cin >> *scores[i];

            if (*scores[i] < 0 || *scores[i] > 100)
            {
                cout << "!!! INVALID SCORE" << endl;
            }

        } while (*scores[i] < 0 || *scores[i] > 100);
    }
}

// Function 3: Arguments, with return value
double calculateAverage(int s1, int s2, int s3, int s4, int s5)
{
    return (s1 + s2 + s3 + s4 + s5) / 5.0;
}

// Function 4: Arguments, with return value
char determineGrade(double average)
{
    if (average >= 80)
        return 'A';
    else if (average >= 65)
        return 'B';
    else if (average >= 50)
        return 'C';
    else if (average >= 40)
        return 'D';
    else
        return 'F';
}