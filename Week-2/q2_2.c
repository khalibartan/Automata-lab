#include<stdio.h>
#include<string.h>

int regex2(char *string){
	int i,j=0,state_transition[2][3]={{0,2,2},{1,1,2}};
	int size = strlen(string);
	for(i=0;i<size;i++){
		if(string[i]=='a'){
			j = state_transition[0][j];
		}
		else if(string[i]=='b'){
			j = state_transition[1][j];
		}
	}
	if(j==2){
		return 0;
	}
	else if(j==0 || j==1){
		return 1;
	}
}

int main(){
	char string[1000];
	printf("Enter the string ");
	scanf("%s",string);
	if(regex2(string)){
		printf("String is of the form a*b*\n");
	}
	else{
		printf("String is not of the form a*b*\n");
	}
return 0;
}
