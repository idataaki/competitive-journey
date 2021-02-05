#include <cstdio>
#include <cstring>
using namespace std;

int main2() {
  int i, j, k, TC, M, C;
  int price[25][25];                     // price[g (<= 20)][model (<= 20)]
  bool reachable[25][210];    // reachable table[g (<= 20)][money (<= 200)]

  scanf("%d", &TC);
  
  while (TC--) {
    scanf("%d %d", &M, &C);
    for (i = 0; i < C; i++) {
      scanf("%d", &price[i][0]);               // we store K in price[i][0]
      for (j = 1; j <= price[i][0]; j++) scanf("%d", &price[i][j]);
    }

    for (size_t i = 0; i < 25; i++){
        for (size_t j = 0; j < 25; j++){
            printf("%d", price[i][j]);
        }
        printf(" ");    //print nothing
    }
    

    memset(reachable, false, sizeof reachable);         // clear everything
    for (i = 1; i <= price[0][0]; i++)       // initial values (base cases)
      if (M - price[0][i] >= 0)      // to prevent array index out of bound
        reachable[0][M - price[0][i]] = true;  // using first garment g = 0

    for (i = 1; i < C; i++)                   // for each remaining garment
      for (j = 0; j < M; j++) if (reachable[i - 1][j]) // a reachable state
        for (k = 1; k <= price[i][0]; k++) if (j - price[i][k] >= 0)
          reachable[i][j - price[i][k]] = true;   // also a reachable state

    for (j = 0; j <= M && !reachable[C - 1][j]; j++); // the answer in here

    if (j == M + 1) printf("no solution\n");         // last row has on bit
    else            printf("%d\n", M - j);
} } // return 0;