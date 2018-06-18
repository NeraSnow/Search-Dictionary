#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// User input
char input[100];
// The current string that was read in
char current [100]; 	

bool current_include_string(char input[]){
	
	if (strstr(current, input) != NULL) {
		return true;
	} else {
		return false;
	}
	
}


	
	
int main(void){
	FILE * dictionary;
	dictionary = fopen("dictionary.txt", "r");
	
	
	printf("Please type in the string that you would like to search\n");
	// Get the string that user wanted to search
  scanf("%s", input);
	printf("Read in %s\n", input);
  printf("-------------------------------------------------\n");
  
	if (dictionary) {
		while ( (fscanf(dictionary, "%s",current)!= EOF)){
//      trace_bool(current_include_string(input));
      if (current_include_string(input)){
				  printf("%s\n", current);
			  }
    }
	}
	return 0;
  

}