#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
 
int main(int argc, string argv[])
{
    if (argc != 2)
    {
    	printf("Usage: ./a key");
    	    return 1;
    }
    
    int k = atoi(argv[1]);
    
    if (atoi(argv[1]) == 0)
    {
    	printf("Usage: ./a key - Use an integer please");
    	    return 1;
    }
    
//error messages and correct usage instructions for command line arguments
 
    printf ("Please enter the plain text: ");
 
    string p = GetString();
 
    for (int i = 0, n = strlen(p); i < n; i++)
//iterating through each char in string
    {  
        if (p[i] >=65 && p[i] <=90)
        {
            p[i] = ((p[i] +k) -65) %26 +65;
        }
//uppercase letters only
        else if (p[i] >=97 && p[i] <=122)
        {
            p[i] = ((p[i] +k) -97) %26 +97;
        }
 //lowercase letters only
        printf("%c", p[i]);
    }
// prints each character which has been rotated on the same line
    printf("\n");
        return 0;
}