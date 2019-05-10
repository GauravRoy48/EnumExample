#include <stdio.h>
#include <stdlib.h>

int main()
{
   enum Company { GOOGLE, FACEBOOK, XEROX, YAHOO = 10, EBAY, MICROSOFT } ;

   enum Company c1 = XEROX;
   enum Company c2 = GOOGLE;
   enum Company c3 = EBAY;

   printf("The value of xerox is: %d\n", c1);
   printf("The value of google is: %d\n", c2);
   printf("The value of ebay is: %d\n", c3);

    return 0;
}
