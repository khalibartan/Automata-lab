#include<stdio.h>
#include<string.h>

int regex5(char *string){
	int i,j=0,size=strlen(string),state_transition[2][3]={{2,2,2},{1,1,2}};
	for(i=0;i<size;i++){
		if(string[i]=='0')
			j = state_transition[0][j];
		else if(string[i]=='1')
			j = state_transition[1][j];
		else{
			printf("not a valid input\n");
			return 0;
		}
	}
	if(j==2){
		return 1;
	}
	else{
		return 0;
	}
}

int main(){
	char string[1000];
	printf("Enter a string of 0's and 1's: ");
	scanf("%s",string);
	if(regex5(string)){
		printf("String is of the form (11*0+0)(0+1)*0*​1*​\n");
	}
	else{
		printf("String is not of the form (11*0+0)(0+1)*0*​1*\n");	
	}
	return 0;
}
