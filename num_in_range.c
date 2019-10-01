/*
[2 points] num_in_range(char *s1, char b, char t)
returns the number of characters c in s1 such that b<=c<=t
*/

int num_in_range(char *s1, char b, char t) {
    int count = 0;
    while (*s1 != '\0') {
        if(b <= *s1 && *s1 <= t)
            count++;
        s1++;
    }
    return count;
}
