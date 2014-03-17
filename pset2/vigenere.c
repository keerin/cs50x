#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
   if (argc != 2)
       {
           printf ("useage: ./a key");
           return 1;
       }

       // need to add a check for the key being alphabetic character as well
   
   string key = argv[1];
   
   printf ("Please enter the text you wish to be encrypted: \n");
   string phrase = GetString();

   // The above gets the text to be encrypted from the user and stores it in 'phrase'
   
   int i; int j; int plength;
   int keylen = strlen(key);
 
   for (i = 0, j = 0, plength = strlen(phrase); i < plength; i++, j++)

    /**while i is less than the length of the phrase, add one to i and one to j - i will be the current char of the phrase
    and j will be the current character of th keyphrase **/

   { 
       if (isupper(key[j]))
       {
           key[j] = key[j] - 'A';
       }
       
       if (islower(key[j]))
       {
           key[j] = key[j] - 'a';
       }

       // the two if statements above keep capitalisation of chars in keyphrase

       if (phrase[i] >='A' && phrase[i] <='Z')
       {
           phrase[i] = ((phrase[i] +key[j%keylen]) -'A') %26 +'A';
       }

       else if (phrase[i] >='a' && phrase[i] <='z')
       {
           phrase[i] = ((phrase[i] +key[j%keylen]) -'a') %26 +'a';
       }

      // the two above keep the capitalisation of the chars in the keyphrase, and treat the key and phrase as cyclical
       
        else if (isalpha(key[j]) != 1)
        {
            j--;
        }
        /** This is acheck to see if the ith character in the phrase is alphabetic.
        If not, it should print the character without shifting it and move to the next char in phrase
        without incrementing the jth char of the key **/
    printf ("%c", phrase[i]);
    }
    printf ("\n");
      return 0;
}