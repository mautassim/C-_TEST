#include <iostream>
using namespace std;

int main(){

	int numbers_sum[10];
		int add =0;
		int larger = 0;
		int s = 0;
		int r;

		for(int x =0 ; x <=0 ; x++){
	cout<<"insert a number >>>"<<" ";
	cin>>numbers_sum[x];
	
	for(int i = 0 ; i <=numbers_sum[x] ; i++)

	cout<<i<<endl;

	for(int sum = 0 ; sum <=numbers_sum[x] ; sum++)

	add += sum;

	for(int z = 0 ; z<=numbers_sum[x] ; z++){

		r = numbers_sum[x];

		if(r  >  larger)
		 
			larger = r;
		
			r =  numbers_sum[x];
	
		if(r < s)
		 
		s = r;
	
	}
		}
	
	cout<<"------------------------"<<endl;

	cout<<"the sum is = "<<add<<endl;

cout<<"the max number is ="<<larger<<"  "<<endl;	

cout<<"the min number is ="<<s<<"  "<<endl;

	system("pause");

return 0;
}
