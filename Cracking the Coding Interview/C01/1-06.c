#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* compress (char* original, size_t len);
char* numToString (int count);

int main (int argc, char** argv)
{
    char* original = malloc(sizeof(char) * 16384);
    scanf("%s", original);
    size_t orig_len = strlen(original);
    char* compressed = compress(original, orig_len);
    size_t comp_len = strlen(compressed);
    if (orig_len > comp_len)
        printf("%s\n", compressed);
    else
        printf("%s\n", original);
    free (original);
    free (compressed);
    return 0;
}

char* compress (char* original, size_t len)
{
    char* compressed = malloc(sizeof(char) * 16384);
    char last = original[0];
    int i;
    int cc = 1;
    int ci = 0;
    for (i = 1; i < len; i++)
    {
        char curr = original[i];
        if (curr != last)
        {
            compressed[ci++] = last;
            char* count = numToString (cc);
            size_t num_len = strlen(count);
            int j;
            for (j = num_len-1; j > -1; j--)
            {
                compressed[ci++] = count[j];
            }
            free(count);
            cc = 1;
        }
        else
        {
            cc++;
        }
        last = curr;
    }
    compressed[ci++] = last;
    char* count = numToString (cc);
    size_t num_len = strlen(count);
    int j;
    for (j = num_len-1; j > -1; j--)
    {
        compressed[ci++] = count[j];
    }
    free(count);
    return compressed;
}

char* numToString (int count)
{
    char* str = malloc(sizeof(char) * 4096);
    int sc = 0;
    while (count)
    {
        char d = (count % 10) + '0';
        str[sc++] = d;
        count /= 10;
    }
    return str;
}
