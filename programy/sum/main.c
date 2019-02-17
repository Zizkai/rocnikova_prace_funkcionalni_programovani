#include <stdio.h>
#include <stdlib.h>

int sum(int n){
    int souc;
    if( n <= 1 ){
        return 1;
    }
    else{
        souc = n + sum( n - 1 );
    }
return souc;
}

int souc(int n) {
  int i;
  int s = 0;
  for (i = n; i >= 0; i --)
    {
    s = s + i;
    }
  return s;
}



int main()
{
    int n = 5;
    printf("%d\n%d\n", sum(n), souc(n));
    return 0;
}
