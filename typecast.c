# include<stdio.h>

int main()
{
    int x,y;
    printf("This Is Implicit Type Example which is done by compiler itself");
    printf("\nSystem implicitly prints key related to ANSI keycode");
    for(x=0; x<=126; x++)
    {
        printf("%c", x);
    }
    printf("\n\nThis Is Explicit Type Example which is done by programmer");
    x=5;
    y=2;
    float z;
    printf("\n\nValue of z without typecast: %f",z=(x/y));
    printf("\n\nValue of z with typecast: %f",z=((float)x/y));

}
