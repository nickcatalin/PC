
#include <stdio.h>

int main()
{
        int a,b,c,p;

        scanf( "%d", &p );
        for( a = 0; a < p - 1; a++ )
         for( b = a; b < p - a; b++ ) {
            c = p - a - b;
                        
            if ( c >= b && c <= a + b && a <= c + b && b <= c + a )
                printf( "%d %d %d\n",a,b,c );
                
             
         }

        return 0;
}
