#include <iostream>
using namespace std;
int main() {
	int arr[10000];
	for(int i=0;i<arr.length();i++){
		cin>>arr[i];
	}
	for(int i=0;i<arr.length();i++){
		if(arr[i]==42){
			cout<<arr[i-1]<<endl;
		}
	}
	return 0;
}