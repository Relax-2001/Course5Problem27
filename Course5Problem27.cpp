#include <iostream>
#include <cstdlib>

using namespace std;

int ReadPositiveNumber(string Message)
{
	int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

int RandomNumber(int From, int To)
{

	int RandomNum = rand() % (To - From + 1) + From;

	return RandomNum;
}

void FillArrayWithRandomNumbers(int Arr[], int& ArrayLength)
{

	cout << "Enter number of elements you want to fill the array with\n";
	cin >> ArrayLength;

	for (int i = 0; i <= ArrayLength - 1; i++)
	{
		Arr[i] = RandomNumber(1, 10);
	}

}


int GetArrayElementsSum(int Arr[], int ArrayLength)
{
	int Sum = 0;

	for (int i = 0; i <= ArrayLength - 1; i++)
	{

		Sum += Arr[i];

	}
	return Sum;
}

float GetArrayElementsAvg( int Arr[], int ArrayLength)
{
	return (float) GetArrayElementsSum(Arr , ArrayLength) / ArrayLength;
	
}

void PrintArray(int Arr[], int ArrayLength)
{

	for (int i = 0; i <= ArrayLength - 1; i++)
		cout << Arr[i] << " ";

	cout << "\n";
}

int main()
{
	srand((unsigned)time(NULL));

	int Arr[100], ArrayLength = 0;

	FillArrayWithRandomNumbers(Arr, ArrayLength);

	cout << " Array elements :";
	PrintArray(Arr, ArrayLength);

	cout << "Avg of arry numbers :" << GetArrayElementsAvg(Arr, ArrayLength);

}