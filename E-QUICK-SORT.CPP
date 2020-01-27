#include <iostream>
using namespace std;

void swap(int* a, int* b){
    int t = *a;
    *a = *b;
    *b = t;
}

int partition (int arr[], int low, int high)  {
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++)  {
        if (arr[j] < pivot){
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high)  {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main(int argc, char** argv) {
	int n, arr[99],size,i;
	for (size=0; ;size++){
		cin >>arr[size];
		if (cin.get()=='\n'){
			break;
		}
	}

	cout << "Array before Sorting: ";
	for (i=0;i<=size;i++){
		cout << arr[i] << " ";
	}

	cout << endl << "Array after Sorting: ";
	quickSort(arr,0,size);
	for (i=0;i<=size;i++){
		cout << arr[i] << " ";
	}

	return 0;
}
