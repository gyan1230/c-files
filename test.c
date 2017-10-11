#include<stdio.h>

main( )
{
func( ) ;
func( ) ;
}
func( )
{
auto int i = 0 ;
register int j = 0 ;
static int k = 0 ;
i++ ; j++ ; k++ ;
printf ( "\n %d % d %d", i, j, k ) ;
}
