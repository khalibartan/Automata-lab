#include<stdio.h>
#include<string.h>

int regex1(char *string){
// a(ab)+a
	int i=0,size=strlen(string);
	if(string[i]=='a' && i<size){
		i++;
		goto state_q1;
	}
	else{
		return 0;
	}
	state_q1:
		if(string[i]=='a' && i<size){
			i++;
			goto state_q2;
		}
		else{
			return 0;
		}		
	state_q2:
		if(string[i]=='b' && i<size){
			i++;
			goto state_q3;
		}
		else{
			return 0;
		}
	state_q3:
		if(string[i]=='a' && i<size){
			i++;
			goto state_q4;
		}
		else{
			return 0;
		}
		
	state_q4:
		if(i==size){
			return 1;
		}
		else if(string[i]=='b' && i<size){
			i++;
			goto state_q3;
		}
		else{
			return 0;
		}
	 	 
}

int main(){
	char string[1000];
	printf("Enter the string: ");
	scanf("%s",string);
	if(regex1(string)){
		printf("String is of the form a(ab)+a \n");
	}
	else{
		printf("String is not of the form a(ab)+a\n");
	}
	return 0;
}

