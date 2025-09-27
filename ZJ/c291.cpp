// c291. APCS 2017-0304-2小群體

#include<cstdio>
#include<vector>
using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    vector<int> arr(n);
    vector<int> visited(n, false);
    
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        visited[i] = false;
    }
    
    int group = 0, next = 0;
    for(int i = 0; i < n; i++){
        if(visited[i]) continue;
        next = arr[i];
        visited[i] = true;

        while(true){
            visited[next] = true;
            next = arr[next];
            if(next == i) break; 
        }
        
        group++;
    }
    printf("%d", group);
    return 0;
}
