#include<iostream>
using namespace std;
int main(){
	char c;
	int choice;
	cout<<"Enter an alphabet : ";
	cin>>c;
	if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U'){
		choice=1;
	}
	else{
		choice=0;
	}
	switch(choice){
		case 1:cout<<"VOWEL";break;
		case 0:cout<<"CONSONANT";break;
	}
	return 0;
}
