#include <iostream>
#include <iomanip>
using namespace std;


int RandomNubers(int From, int To)
{
	return rand() % (To - From + 1) + From;
}

void fill3X3MatrixWithRandomNumbers(int arr[3][3], int Rows, int Colos)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int x = 0; x < Colos; x++)
		{
			arr[i][x] = RandomNubers(1, 10);
		}
	}
}
void printMatrix3X3(int arr[3][3], int Rows, int Colos)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int x = 0; x < Colos; x++)
		{
			//cout << setw(3) << arr[i][x] << "	";
			printf("  %0*d  ", 2, arr[i][x]);
		}
		cout << endl;
	}
	cout << endl;
}
bool SimmetryOfTwoMatricies(int arr1[3][3], int arr2[3][3], int Rows, int Colos)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int x = 0; x < Colos; x++)
		{
			if (arr1[i][x] != arr2[i][x])
				return 0;
		}
	}
	return 1;
}

void printResult(int arr1[3][3], int arr2[3][3], int Rows, int Colos)
{
	if (SimmetryOfTwoMatricies(arr1, arr2, Rows, Colos))
		cout << "   Yes: Matricies are Typical.\n";
	else
		cout << "   No: Matricies are not Typical.\n";
}

int main()
{
	srand((unsigned)time(NULL));
	int arr1[3][3], arr2[3][3];

	fill3X3MatrixWithRandomNumbers(arr1, 3, 3);
	cout << "   Matrix1: \n";
	printMatrix3X3(arr1, 3, 3);

	fill3X3MatrixWithRandomNumbers(arr2, 3, 3);
	cout << "   Matrix2: \n";
	printMatrix3X3(arr2, 3, 3);

	printResult(arr1, arr2, 3, 3);



	return 0;
}



