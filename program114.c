// Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    scanf("%s", s);
    int n = strlen(s);

    int last_index[256];
    for(int i = 0; i < 256; i++)
        last_index[i] = -1;

    int max_len = 0;
    int start = 0;

    for(int end = 0; end < n; end++) {
        if(last_index[(int)s[end]] >= start)
            start = last_index[(int)s[end]] + 1;

        last_index[(int)s[end]] = end;
        int len = end - start + 1;
        if(len > max_len)
            max_len = len;
    }

    printf("%d", max_len);
    return 0;
}