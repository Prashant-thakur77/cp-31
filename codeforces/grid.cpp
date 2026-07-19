#include <iostream>
#include <vector>
#include <set>
#include <queue>

using namespace std;

int minNumOfwalls(int **a, int m, int n) {
    vector<vector<int>> g(m, vector<int>(n));
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            g[i][j] = a[i][j];
        }
    }
    
    int min = 0; 
    int dx[] = {-1, 1, 0, 0};
    int dy[] = {0, 0, -1, 1};

    while (true) {
        vector<vector<int>> vis(m, vector<int>(n, 0));
        vector<set<pair<int, int>>> thr;
        vector<int> wls;
        vector<vector<pair<int, int>>> regs;

        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (g[i][j] == 1 && !vis[i][j]) {
                    set<pair<int, int>> th;
                    vector<pair<int, int>> rg;
                    int wl = 0;
                    queue<pair<int, int>> q;
                    
                    q.push({i, j});
                    vis[i][j] = 1;
                    rg.push_back({i, j});

                    while (!q.empty()) {
                        auto p = q.front();
                        q.pop();
                        
                        for (int k = 0; k < 4; ++k) {
                            int nx = p.first + dx[k];
                            int ny = p.second + dy[k];
                            
                            if (nx >= 0 && nx < m && ny >= 0 && ny < n) {
                                if (g[nx][ny] == 0) {
                                    th.insert({nx, ny});
                                    wl++;
                                } else if (g[nx][ny] == 1 && !vis[nx][ny]) {
                                    vis[nx][ny] = 1;
                                    q.push({nx, ny});
                                    rg.push_back({nx, ny});
                                }
                            }
                        }
                    }
                    
                    thr.push_back(th);
                    wls.push_back(wl);
                    regs.push_back(rg);
                }
            }
        }

        if (regs.empty()) break;

        int idx = -1, mx = 0, mw = 1e9;
        for (int i = 0; i < (int)thr.size(); ++i) {
            int sz = thr[i].size();
            if (sz == 0) continue;
            if (sz > mx) {
                mx = sz;
                idx = i;
                mw = wls[i];
            } else if (sz == mx && wls[i] < mw) {
                mw = wls[i];
                idx = i;
            }
        }

        if (idx == -1) break;

        min += wls[idx];

        for (auto& p : regs[idx]) {
            g[p.first][p.second] = 2;
        }

        for (int i = 0; i < (int)regs.size(); ++i) {
            if (i != idx) {
                for (auto& p : thr[i]) {
                    g[p.first][p.second] = 1;
                }
            }
        }
    }
    return min;
}

int main()
{
    int m,n,**a;
    cin>>m>>n;
    a = new int*[m];
    for(int i=0; i<m; i++)
        a[i] = new int[n];
    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++)
            cin>>a[i][j];
    cout<<minNumOfwalls(a,m,n);
    return 0;
}