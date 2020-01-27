#include <iostream>
using namespace std;

void selection(int ar[99], int n){
	int i,j,temp;
	for (i=0;i<=n;i++){
		for (j=i+1;j<=n;j++){
			if (ar[j]<ar[i]){
				swap(ar[j],ar[i]);
			}
		}
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
	selection(arr,size);
	for (i=0;i<=size;i++){
		cout << arr[i] << " ";
	}

	return 0;
}
