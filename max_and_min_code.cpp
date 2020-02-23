#include <iostream>
using namespace std;


int main (){
	
	
	int arr[7] = {23,46,77,90,3,7,200};
	
	int max = arr[0];
	int min = arr[0];
	for(int i=1; i<7; i++){
		if( arr[i] > max){
			max = arr[i];
		}
		
	}
		for(int i=1; i<7; i++){
		if( arr[i] < min){
			min = arr[i];
		}
		
	}
	
	cout<< "The minimum number is " << min<< endl;
	cout<<"The maximum number is " << max<< endl;
	
	return 0;
}
