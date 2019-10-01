/*
[5 points] ends_with_ignore_case(char *s, char *suff)
returns 1 if suff is a suffix of s ignoring case or 0 otherwise.
*/


int ends_with_ignore_case(char *s, char *suff)  {
    int c = 0;
    char *t = suff;
    while(*t != '\0') {
        t++;
        c++;
    }
    t = s;
    while(*t != '\0')
        t++;
    t = t -c;
    char *p = suff;
    char ignoreSuff = tolower(*p);
    char ignoreStr = tolower(*t);
    while(ignoreSuff == ignoreStr && *p !='\0' && *t != '\0') {
        p++;
        t++;
        ignoreSuff = tolower(*p);
        ignoreStr = tolower(*t);
    }
    if(*p == '\0')
        return 1;
    else
        return 0;
}