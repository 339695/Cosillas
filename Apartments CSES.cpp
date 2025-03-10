/*There are n applicants and m free apartments. Your task is to distribute the apartments so that as many applicants as possible will get an apartment.
Each applicant has a desired apartment size, and they will accept any apartment whose size is close enough to the desired size.
Input
The first input line has three integers n, m, and k: the number of applicants, the number of apartments, and the maximum allowed difference.
The next line contains n integers a_1, a_2, \ldots, a_n: the desired apartment size of each applicant. If the desired size of an applicant is x, they will accept any apartment whose size is between x-k and x+k.
The last line contains m integers b_1, b_2, \ldots, b_m: the size of each apartment.
Output
Print one integer: the number of applicants who will get an apartment*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int ans=0;
    int j=0;
    for(int i=0;i<n;i++){
        while(j<m&&b[j]<a[i]-k){
            j++;
        }
        if(j<m&&b[j]<=a[i]+k){
            ans++;
            j++;
        }
    }
    cout<<ans;
    return 0;
}
