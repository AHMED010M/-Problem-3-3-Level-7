#include <iostream>
#include <iomanip>
using namespace std;

int RandomNumber(int From, int To)
{

	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}

void FillMatrix3x3(int arr[3][3], int Rows, int Cols)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{

			arr[i][j] = RandomNumber(1, 100);


		}

	}

}

int RowSum(int arr[3][3], short RowNumber, short Cols)
{
	int Sum = 0;
	for (short j = 0; j <= Cols - 1; j++)
	{
		Sum += arr[RowNumber][j];
		
	}
	return Sum;
}

void PrintEachRowSumFromArraty(int arr[3][3], short Rows, short Cols, int ArraySum[3])
{
	cout << "\nThe the following are the sum of each row in the matrix: \n";
		
		for (short i = 0; i < Rows; i++)
		{
			ArraySum[i] = RowSum(arr, i, Cols) ;
			cout << " Row " << i + 1 << " Sum = " << ArraySum[i] << endl;
		}
}

void PrintMatrix(int arr[3][3], int Rows, int Cols)
{

	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{

			cout << setw(3) << arr[i][j] << "\t";


		}
		cout << "\n";
	}





}


int main()
{

	srand((unsigned)time(NULL));
	int arr[3][3],Array[3];

	FillMatrix3x3(arr, 3, 3);

	cout << "The following is a 3x3 random matrix :" << endl;
	PrintMatrix(arr, 3, 3);

	PrintEachRowSumFromArraty(arr,3, 3,Array);

}

