/*
[2 points] int all_letters(char *s)
Returns 1 if all of the characters in the string are either upper-case or lower-case letters of the alphabet. It returns 0 otherwise.
*/

int all_letters(char *s) {
    if((*s) == '\0')
        return 0;
    while (*s != '\0') {
        if(*s < 'A' || *s > 'z' || (*s > 'Z' && *s < 'a' ))
        return 0;
        s++;
    }
    return 1;
}