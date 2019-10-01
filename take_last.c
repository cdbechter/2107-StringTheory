/*
[3 points] void take_last(char *s, int n)
Modifies s so that it consists of only its last n characters. If n is ≥ the length of s, 
the original string is unmodified. For example if we call take_last("Brubeck" 5), 
when the function finishes, the original string becomes "ubeck"
*/


void take_last(char *s, int n) {
    int i = 0, j = 0, len = 0;
    char *t = s;
    if(!s)
        return;
    while (*t != '\0') {
        t++;
        len++;
    }
    if (len < n)
        return;
    for (i = 0, j = n; i < n; i++, j--)
        s[i] = s[len - j];
    s[i] = '\0';
}
