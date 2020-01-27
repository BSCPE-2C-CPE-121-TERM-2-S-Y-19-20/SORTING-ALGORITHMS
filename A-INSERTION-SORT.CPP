#include <iostream>
using namespace std;

void insertion(int ar[99], int n){
	int i,j,temp;
	for (i=1;i<=n;i++){
		temp = ar[i];
		j=i-1;
		while (j>=0 && ar[j] > temp){
			ar[j+1]= ar[j];
			j=j-1;
		}
		ar[j+1]=temp;
	}
}
int main(int argc, char** argv){

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
	insertion(arr,size);
	for (i=0;i<=size;i++){
		cout << arr[i] << " ";
	}

	return 0;
}
