#include<iostream>
using namespace std;

int main(){
	int primenumber = 2 , count = 1 , numberperlines = 0;
	
	while(count<=50){
		bool prime = true;
		int checkingnumber=2;
		while(checkingnumber<primenumber){
			if(primenumber % checkingnumber == 0){
				prime = false;	
				break;
			}
		checkingnumber++;
		}	
		if(prime){
			cout<<primenumber<<"\t";
			count++;	
			numberperlines++;
			if(numberperlines % 10 == 0){
				cout<<endl;
			}
		}			
	primenumber++;	
	}
return 0;
}
