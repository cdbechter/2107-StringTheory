/*
[5 points] int find(char *h, char *n)
returns the index of the first occurence of n in the string h or -1 if it isn't found.
*/

int find(char *h, char *n) {
    int x = -1;
    int c = 0;
    while(*h != *n && *h != '\0') {
        c++;
        h++;
    }
    if(*h == *n)
        x = c;
    return x;
}
