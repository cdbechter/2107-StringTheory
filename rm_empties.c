/*
[5 points] void rm_empties(char **words)
words is an array of string terminated with a NULL pointer. 
The function removes any empty strings (i.e., strings of length 0) from the array.
*/

#define NULL 0

void rm_empties(char **words) {
    int i=0, j, k, len, p = 0;
    while(words[i] != NULL) {
        len = 0;
        for(j=0; words[i][j] != '\0'; j++)
            len++;
        if(len == 0) {
            k = i;
            while(words[k+1] != NULL) {
                words[k] = words[k+1];
                k++;
            }
            p++;
        } else
            i++;
    }
    words[(i-p)] = NULL;
}
