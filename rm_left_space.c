/*
[2 points] void rm_left_space(char *s)
removes whitespace characters from the beginning of s
*/

void rm_left_space(char *s) {
    int index, i, j;
    index = 0;
    while(s[index] == ' ' || s[index] == '\t' || s[index] == '\n') {
        index++;
    }
    if(index != 0) {
        i = 0;
        while(s[i + index] != '\0') {
            s[i] = s[i + index];
            i++;
        }
        s[i] = '\0';
    }
}
