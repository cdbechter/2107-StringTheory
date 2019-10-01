#include<stdio.h>
#include<stdlib.h>
#include "stringLib.h"
#include <math.h>

int main() {
    int x, i;
    char test1[] = "My name is Christopher\0";
    char test2[] = "I was born in Langhorne\0";
    char test3[] = "start\0";
    //char test4[] = "end\0";
    char test5[] ="a\0";
    char test6[] = "clock\0";
    char test7[] = "   d\0";
    char test72[] = "d     ";
    char test8[] = "  Okay  \0";
    char test9[] = "I dont know what I dont know\0";
    char test10[] = "know\0";
    char test11[] = "aaaaaaaaabccccccccbdddddddbqqqqqqbss\0";
    char test13[] = "how is the winter not here yet, the jerk\0";

    //char test12[] = "Reef X\0";
    //char pat[] = "J\0";
    //char rep[] = "awesome\0";

    char *strs[] = { "Bechter", "Mullins", "Rosen" };
    char *words[] = { "Bechter", "" ,"Mullins", "" , "" , "Rosen", NULL };
    char *p;
    char *res;
    char **plsWork;

    printf("test1 = %s\n", test1);
    printf("test2 = %s\n", test2);
    printf("test3 = %s\n", test3);
    //printf("test4 = %s\n", test4);
    printf("test5 = %s\n", test5);
    printf("test6 = %s\n", test6);
    printf("test7 = %s\n", test7);
    printf("test8 = %s\n", test8);
    printf("test9 = %s\n", test9);
    printf("test10 = %s\n", test10);
    printf("test11 = %s\n", test11);
    //printf("test12 = %s\n", test12);
    printf("test13 = %s\n\n", test13);



    printf("Testing all_letters w test1\n"); //ok
    printf("Test1: %s\n",test1);
    x = all_letters(test1);
    printf("%d\n\n", x);

    printf("Testing capitalize w test 2\n"); //ok
    printf("Test2: %s\n", test2);
    capitalize(test2);
    printf("\n\n");

    printf("Testing diff w test1, test2\n"); //ok
    printf("Test1: %s\nTest2: %s\n", test1, test2);
    x = diff(test1, test2);
    printf("%d\n\n", x);

    printf("Testing ends_with_ignore_case w test2, test4\n"); //ok
    printf("Test2:%s\nTest4:%s\n", test2,test3);
    x = ends_with_ignore_case(test2, test3);
    printf("%d\n\n", x);

    printf("Testing find w test1, test5\n"); //ok
    printf("Test1:%s\nTest5:%s\n", test1, test5);
    x = find(test1, test5);
    printf("%d\n\n", x);

    printf("is_empty w test10\n"); //ok
    printf("Test10: %s\n",test10);
    x = is_empty(test10);
    printf("%d\n\n", x);

    printf("Testing len_diff w test1, test2\n"); //ok
    printf("Test1:%s\nTest2:%s\n", test1,test2);
    x=len_diff(test1, test2);
    printf("%d\n\n", x);

    printf("Testing num_in_range w test1, c, r\n"); //ok
    printf("Test1: %s\n",test1);
    x = num_in_range(test1,'c','r');
    printf("%d\n\n", x);

    printf("Testing ptr_to w test1, test6\n"); //ok
    printf("Test1:%s\nTest6:%s\n", test1,test6);
    p = ptr_to(test1, test6);
    printf("%s\n\n", p);

    printf("Testing rm_empties w words\n words: "); //ok
    while(words[i] != NULL)
    {
    printf(" %s", words[i]);
    i++;
    }
    rm_empties(words);
    i=0;
    printf("\n\n After calling rm_empties words: \n");
    while(words[i] != NULL)
    {
    printf(" %s", words[i]);
    i++;
    }

    printf("\n\nTesting rm_left_space w test7\n"); //ok
    printf("Test7: %s\n",test7);
    rm_left_space(test7);
    printf("%s\n\n", test7);

    printf("Testing rm_right_space w test72\n"); //ok
    printf("Test72: %s\n",test72);
    rm_right_space(test72);
    printf("%s\n\n", test72);

    printf("Testing rm_space w test8\n"); //ok
    printf("Test8: %s\n",test8);
    rm_space(test8);
    printf("%s\n\n", test8);

    printf("Testing shorten w test1, 8\n"); //ok
    printf("Test1: %s\n",test1);
    shorten(test1, 7);
    printf("%s\n\n", test1);

    printf("Testing str_len w test2\n"); //ok
    printf("Test2: %s\n",test2);
    x = str_len(test2);
    printf("%d\n\n", x);

    printf("Testing strcmp_ign_case w test9,test10\n"); //ok
    printf("Test9: %s\nTest10: %s\n", test9, test10);
    x = str_cmp_ign_case(test9, test10);
    printf("%d\n\n",x);

    printf("Tesing take_last w test13 "); //ok
    printf("Test13: %s\n",test13);
    take_last(test13,10);
    printf("Test13: %s\n",test13);

    return 0;
}
