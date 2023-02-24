#include <iostream>
using namespace std;
int main() {
	int length,n,width,height;
	

	cin>>length;

	cin>>n;
	for(int i=0;i<n;i++){
		//int width,height;
		cin>>width>>height;
	
	if(width<length || height<length){
		cout<<"UPLOAD ANOTHER"<<endl;
		
	}
	else if(width == height){
		
		cout<<"ACCEPTED"<<endl;
	}
	else {
		cout<<"CROP IT"<<endl;
		}
	}
    return 0;
}