#include <stdio.h>
int main()
{
    int prize;
label:

    printf("press 1 for maths prize\npress 2 for science prize\npress 3 for both\npress 0 to end\n");

    scanf("%d", &prize);

    if (prize == 1)
    {
        printf("maths mothafucker\n");
        goto label;
    }
    else if (prize == 2)
    {
        printf("fucking scientist\n");
        goto label;
    }
    else if (prize == 3)
    {
        printf("motherfucking genius\n");
        goto label;
    }
    else if (prize == 0)
    {
        goto end;
    }
    else
    {
        printf("you are shit\n");
    }

end:

    return 0;
}
