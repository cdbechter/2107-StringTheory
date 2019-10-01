/*
[2 points] void shorten(char *s, int new_len)
Shortens the string s to new_len. If the original length of s is less than or equal to new_len, s is unchanged
*/

void shorten(char *s, int new_len) {
    int len = 0;
    char *s1 = s;
    while (*(s1++) != '\0')
        len++;
    if (new_len < len)
        s[new_len] = '\0';
}
