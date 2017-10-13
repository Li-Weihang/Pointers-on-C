#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//this is a github test
void deblank(char string[]){
	bool space_flag = false;
	char replace[100];
	int str_index;
	int rep_index = 0;
	for(str_index = 0; string[str_index] != '\0'; ++str_index){
		if(string[str_index] == ' '){
//			printf("index: %d\n", str_index);
			for(int j = str_index; string[j] == ' '; j++){
//				printf("-%c-\n", string[j]);
				str_index++;
			}
			replace[rep_index] = ' ';
			rep_index++;
		}
//		printf("str_index: %d, rep_index: %d\n", str_index, rep_index);
		replace[rep_index] = string[str_index];
		rep_index++;
	}
	replace[rep_index] = '\0';
	strcpy(string, replace);
}

int main(){
	char str[100] = "ab    cc   d  dd      e";
	deblank(str);
	printf("%s", str);

	return 0;
}