#include <stdio.h>

/*
This block of code writes exactly 6 bytes of characters
to the 101-crackme_password file.
*/

int main() {
    FILE *fp;
    char str[6] = "abc123";
    
    fp = fopen("101-crackme_password", "wb");  // open file in binary mode
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    fwrite(str, sizeof(char), 6, fp);  // write 6 bytes of data to file
    
    fclose(fp);
    return 0;
}
