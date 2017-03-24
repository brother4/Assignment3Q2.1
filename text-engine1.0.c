#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "table.h"
#include "levenshtein.h"

#define WORD_LENGTH 50

int main(int argc, char *argv[])
{
    char *dictionary = argv[1];
    char userWord[WORD_LENGTH];
    printf("What word should I check? \n");
    fgets(userWord, WORD_LENGTH, stdin);
    //removing the newline character
    userWord[strlen(userWord) - 1] = '\0';
    printf("did this work? %d\n", levenshtein(userWord, "kitten"));

}