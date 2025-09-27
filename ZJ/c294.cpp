// c294. APCS-2016-1029-1三角形辨別

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[3];
    scanf("%d%d%d", &arr[0], &arr[1], &arr[2]);
    
    sort(arr, arr + 3);
    printf("%d %d %d\n", arr[0], arr[1], arr[2]);
    
    if(arr[0] + arr[1] <= arr[2]) printf("No");
    else if(arr[0] * arr[0] + arr[1] * arr[1] < arr[2] * arr[2]) printf("Obtuse");
    else if(arr[0] * arr[0] + arr[1] * arr[1] == arr[2] * arr[2]) printf("Right");
    else if(arr[0] * arr[0] + arr[1] * arr[1] > arr[2] * arr[2]) printf("Acute");
    return 0;
}
