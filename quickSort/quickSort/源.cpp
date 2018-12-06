#include <iostream>



using namespace std;



int Partition(int A[], int low, int high) 
{
	int pivot = A[low];

	while (low < high) {
		while (low<high && A[high] > pivot) high--;
		A[low] = A[high];
		while (low < high && A[low] < pivot) low++;
		A[high] = A[low];
	}
	A[low] = pivot;
	return low;
}


void QuickSort(int A[],int low,int high)
{
	if (low < high) {
		int pivotpos = Partition(A, low, high);
		QuickSort(A, low, pivotpos - 1);
		QuickSort(A, pivotpos + 1, high);

		for (int i = 0; i < 6; ++i) {
			cout << A[i] << " ";
		}
		cout << endl;
	}

}



int main(int argc, char *argv[])
{


	int A[] = { 46 ,79, 56, 38, 40, 84 };


	QuickSort(A, 0, sizeof(A) / sizeof(int) - 1);



	system("pause");

}