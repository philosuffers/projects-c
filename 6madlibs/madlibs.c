#include <stdio.h>
#include <string.h>

int main () 
{
    char adverb[30];
    char noun[30];
    char adjective [30];

    printf("Enter adverb ");
    fgets (adverb, sizeof(adverb) , stdin);
    adverb[strlen(adverb) - 1] = '\0';

    printf("Enter noun ");
    fgets (noun, sizeof(noun) , stdin);
    noun[strlen(noun) - 1] = '\0';

    printf("Enter adjective ");
    fgets (adjective, sizeof(adjective) , stdin);
    adjective[strlen(adjective) - 1] = '\0';

    printf("he said %s " , adverb);
    printf ("as he jumped into his covertable %s " , noun);
    printf ("and drove off with his %s wife. \n" , adjective);


    return 0;
}