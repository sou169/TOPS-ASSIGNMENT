//Find the Character Is Vowel or Not 
#include<stdio.h>
int main(){
	char a;
	printf("Enter a Character: ");
	scanf(" %c",&a);
	if (a=='a' || a=='e' || a=='i' || a=='o' || a=='u' || a=='A' || a=='E' || a=='I' || a=='O' || a=='U'){
		printf("It's Vowel");
	}
	else{
		printf("It's Consonant");
	}
	return 0;
}
