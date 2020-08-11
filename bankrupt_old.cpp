/*
 * This template is valid both in C and in C++,
 * so you can expand it with code from both languages.
 */

#include <stdio.h>
#include <assert.h>
#include <algorithm>
#include <vector>

// constraints
#define MAXN 1000000
using namespace std;
// input data
int N, i;


int main() {
//  uncomment the following lines if you want to read/write from files
  freopen("input0.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
    long long result=0;
    long long n_x=0;
    long long n_y=0;






    assert(1 == scanf("%d", &N));

    int X[N], Y[N];

    for (i=0; i<N; i++)
        assert(2 == scanf("%d %d", &X[i], &Y[i]));


    //ordinare x e y
    sort(X,X+N);
    sort(Y,Y+N);

    //comprinere X e Y
    int n_salvato=-1;
    vector<int> arraX;
    vector<int> arraY;
    for(long long i=0;i<N;i++){
        if(X[i]!=n_salvato){
            n_salvato=X[i];
            arraX.push_back(X[i]);
        }
    }
    n_salvato=-1;
    for(long long i=0;i<N;i++){
        if(Y[i]!=n_salvato){
            n_salvato=Y[i];
            arraY.push_back(Y[i]);
        }
    }

    for(long long i=arraX[0];i<arraX[arraX.size()-1];i++){
        if(arraX[n_x]==i)
            n_x++;
        for(long long j=arraY[0];j<arraY[arraY.size()-1];j++){
            if(arraY[n_y]==j)
               n_y++;
            if(n_x%2==1 && n_y%2==1)
                result++;
        }
    }
    // insert your code here
    //long long area = 42; // change 42 with actual answer
    printf("%lld\n", result);
    return 0;
}
