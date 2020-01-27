#include <iostream>
using namespace std;

void shellsort(int ar[99], int n){
	int l,i,c,temp,j;
	l=n+1;
	c=l/2;
	while (c!=0)	{
		for (i=0;i<=n;i++){
			j=i+c;
			while (j<=n){
				if (ar[i]>ar[j]){
					temp=ar[i];
					ar[i]=ar[j];
					ar[j]=temp;
				}
				j=j+c;
			}
		}
		c=c/2;
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
	shellsort(arr,size);

	for (i=0;i<=size;i++){
		cout << arr[i] << " ";
	}
	return 0;
}
