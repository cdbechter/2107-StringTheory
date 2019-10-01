/*
[5 points] char *ptr_to(char *h, char *n)
returns a pointer to the first occurence of n in the string h or NULL if it isn't found
*/

#define NULL 0

char *ptr_to(char *h, char *n) {
    for(int i = 0; i < h[i] != '\0'; i++) {
        int matched = 1;
        int prev = i;
        for(int j = 0; n[j]!='\0'; j++) {
            if(h[prev] != '\0' && h[prev] == n[j]) {
                prev++;
                continue;
            } else {
                matched = 0;
                break;
            }
        }
        if(matched == 1)
            return h+i;
    }
    return NULL;
}
