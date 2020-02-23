#include <iostream>
using namespace std;


int linearSearch(int arr[], int size, int element){
	
	for(int i=0; i<size; i++){
		
		if(element == arr[i]){
			return i;
		}
	}
	return -1;
}

int main(){
	int a[] = {23,47,4,67,87,65,21,1};
	int uvalue;
	cout<<"Enter a number to search for it ";
	cin>>uvalue;
	int answer = linearSearch(a, 8, uvalue);
	
	if(answer >=0){
		
	cout<<	a[answer]<<"was found " << "at index " << answer;
		
	}
	else 
	{
		cout<<"the number "<< uvalue << " was not found ";
	}
}
