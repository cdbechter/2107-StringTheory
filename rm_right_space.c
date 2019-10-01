/*
[2 points] void rm_right_space(char *s)
removes whitespace characters from the end of s
*/

void rm_right_space(char *s) {
    char* c = s;
    while(*c != '\0' ) { 
        c++;
    }
    c--;
    //c is now end of string
    while(*c == ' ' ) 
        c--;
    c++;
    *c = '\0';
}
