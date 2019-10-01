/*
[4 points] is_empty(char *s)
returns 1 if s is NULL, consists of only the null character ('') or only whitespace. returns 0 otherwise.
*/

#define NULL 0

int is_empty(char *s) {
    char *t = s;
    if(*s == NULL)
        return 1;
    if(*s == '\0')
        return 1;
    while(*t !='\0')    {
        if(!(*t == ' ' || *t == '\n' || *t == '\f' || *t == '\r' || *t == '\t' || *t == '\v' || *t == '\b'))
                return 0;
        t++;
    }
    return 1;
}
