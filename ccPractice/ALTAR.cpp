//#include "testlib.h"
//#include <spoj.h>

#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#include <cmath>
#include <assert.h>
#include <time.h>
#include <memory.h>
#include <set>
#include <numeric>
#include <map>
#include <queue>
#include <stack>
#include <bitset>

using namespace std;

int a[111111];
int l[111111];

int main() {
    //ios::sync_with_stdio(0);
    int t;
    scanf("%d", &t); //cin >> t;
    while (t --> 0) {
        int n;
        scanf("%d", &n); //cin >> n;
        for(int i = 0; i < n; ++i)
            scanf("%d", a + i); //cin >> a[i];
        
        l[n-1] = 1;
        for(int i = n-2; i >= 0; --i)
        if (a[i] * 1ll * a[i+1] < 0)
            l[i] = l[i+1] + 1;
        else
            l[i] = 1;
        
        for(int i = 0; i < n; ++i)
            printf("%d ", l[i]); //cout << l[i] << " \n"[i+1==n];
        printf("\n");
    }
    return 0;
}