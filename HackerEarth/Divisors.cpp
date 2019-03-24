    #include<stdio.h>
    #define MAX 1000000
    typedef long long ll;
    long long p[10000000];
    void prime ( unsigned long long n ) {
        unsigned long long i,k=0;
        if ( n%2 == 0 ) {
            while ( n%2 == 0 ) {
                p[k++] = 2;
                n = n/2;
            }
        }
        for ( i = 3; i*i <= n ; i+=2) {
            if ( n%i == 0 ) {
                while ( n%i == 0 ) {
                    p[k++] = i;
                    n = n/i;
                }
            }
        }
        if ( n>2)
            p[k++] = n;
        i=k;
        while(p[i]!=0){
            p[i]= 0;
            i++;
            if(p[i] == 0) break;
        }
    }
    int main () {
     
        unsigned long long n,i=0,x,d=1,e=0;
        int t;
        scanf("%d",&t);
        while ( t-- ) {
            d=1;
            e=0;
            scanf("%lld",&n);
            prime(n);
            i=0;
            while(p[i] != 0 ) {
                x = p[i];
                e=0;
                while ( p[i] == x ) {
                    e++;
                    i++;
                }
                d = d*(e+1);
            }
            printf("%lld\n",d);
        }
        return 0;
    }
