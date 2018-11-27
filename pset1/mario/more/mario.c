#include <stdio.h>

int main(void)
{
   int height;

    do
    {
        printf("All the height of your pyramid= ");
        height = GetInt();
    }
    while (height < 0 || height > 23);

    //add for loop 
    for (int line = 0; line < height; line++)
    {
        for (int spaces = height - line; spaces > 1; spaces--)
        {
            printf(" ");
        }
        for (int hashes = 0; hashes < line + 2; hashes++)
        {
            printf("#");
        }
        printf("\n");
    }
}