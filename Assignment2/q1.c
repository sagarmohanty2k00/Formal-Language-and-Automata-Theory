// LAT Assignment-2


// C program to implement DFS that accepts all string that contains 10
#include <stdio.h> 
#include <string.h> 
 
int dfa = 0; 

void state0(char c) 
{ 
	if (c == '1')
	{ 
		dfa = 1; 
	} 
	else if (c == '0')
	{ 
		dfa = 0; 
	}
	else { 
		dfa = -1; 
	} 
} 

void state1(char c) 
{ 
	if (c == '1') { 
		dfa = 1; 
	} 
	else if (c == '0') { 
		dfa = 2; 
	} 
	else { 
		dfa = -1; 
	} 
} 

void state2(char c) 
{ 
	if (c == '1' || c == '0') { 
		dfa = 2;
	} 
	else { 
		dfa = -1; 
	} 
} 

int isAccepted(char str[]) 
{
	int i, len = strlen(str); 

	for (i = 0; i < len; i++) { 
		if (dfa == 0) 
			state0(str[i]); 

		else if (dfa == 1) 
			state1(str[i]); 

		else if (dfa == 2) 
			state2(str[i]);
		else
			return 0; 
	} 
	if (dfa == 2) 
		return 1; 
	else
		return 0; 
} 
 
int main() 
{ 
    int t;
    printf("Enter the number of testcases: ");
    scanf("%d", &t);
    while(t--){
        char str[20];
        printf("Enter a String: \n");
        scanf("%s", str); 
        if (isAccepted(str)) 
            printf("ACCEPTED\n"); 
        else
            printf("NOT ACCEPTED\n");
    } 
	return 0; 
}