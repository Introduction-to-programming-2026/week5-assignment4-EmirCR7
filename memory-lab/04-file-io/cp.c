#include <stdio.h>

typedef unsigned char BYTE;

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Usage: ./cp source destination\n");
        return 1;
    }

    
    FILE *src = fopen(argv[1], "rb");
    if (src == NULL)
    {
        printf("Could not open source file.\n");
        return 1;
    }

    
    FILE *dst = fopen(argv[2], "wb");
    if (dst == NULL)
    {
        printf("Could not open destination file.\n");
        fclose(src);
        return 1;
    }

    BYTE b;

    
    while (fread(&b, sizeof(b), 1, src) != 0)
    {
        fwrite(&b, sizeof(b), 1, dst);
    }

    
    fclose(src);
    fclose(dst);

    return 0;
}