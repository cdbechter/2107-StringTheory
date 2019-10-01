/*
[2 points] int str_len(char *s)
Returns the number of characters in the string s (up to but not including the '\0' character).

Note: Use pointer notation, not array notation for this. An example strlen implementation is shown below. 
Before just using this code, please understand what it is doing (you will be asked to explain why that code works). 
There are multiple ways you could implement this, so if your implementation is different from the below example, 
that is not a problem (as long as it works correctly of course).
*/

int str_len(char *s) {
    int count = 0;
    while(*s != '\0') {
        count++;
        s++;
    }
    return count;
}