#include<stdio.h>
#include<string.h>

int regex3(char *string){
	int i,j=0,size=strlen(string),state_transition[2][4]={{2,2,2,3},{1,3,2,3}};
	for(i=0;i<size;i++){
		if(string[i]=='a'){
			j = state_transition[0][j];
		}
		else if(string[i]=='b'){
			j = state_transition[1][j];
		}
		else{
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
	printf("Enter the string: ");
	scanf("%s",string);
	if(regex3(string)){
		printf("String is of the form a(a+b)*+ba(a+b)*\n");
	}
	else{
		printf("String is not of the form a(a+b)*+ba(a+b)*\n");
	}
	return 0;
}

