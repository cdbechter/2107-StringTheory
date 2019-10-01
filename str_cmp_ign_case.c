/*
[5 points] int str_cmp_ign_case(char *s1, char *s2)
Compares s1 and s2 ignoring case. Returns a positive number if s1 would appear after s2 in the dictionary, 
a negative number if it would appear before s2, or 0 if the two are equal.
*/


int str_cmp_ign_case(char *s1,char *s2) {
    int len1 = 0, len2 = 0, i = 0;
    
    while(s1[len1] != '\0')
        len1++;
    while(s2[len2] != '\0')
        len2++;
    while(i < len1 && i < len2) {
        if(s1[i]>s2[i]){
            return 1;
        } else if(s1[i] < s2[i]) {
            return -1;
        }
        i++;
    }
    return 0;
}