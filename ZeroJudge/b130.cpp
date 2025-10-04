// b130. NOIP2006 1.明明的随机数

#include<cstdio>
#include<vector>
using namespace std;

int partition(vector<int> &arr, int low, int high){
    int i = low - 1, pivot = arr[high];
    for(int j = low; j < high; j++){
        if(arr[j] < pivot){
            i++;
            swap(arr[j], arr[i]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSort(vector<int> &arr, int low, int high){
    if(low < high){
        int pivot = partition(arr, low, high);
        quickSort(arr, low, pivot - 1);
        quickSort(arr, pivot + 1, high);
    }
}

int main(){
    int length;
    scanf("%d", &length);

    vector<int> arr;
    vector<bool> count(1000, false);

    for(int i = 0; i < length; i++){
        int x;
        scanf("%d", &x);
        if(!count[x]){
            count[x] = true;
            arr.push_back(x);
        }
    }

    length = arr.size();
    quickSort(arr, 0, length - 1);

    printf("%d\n", length);
    for(int i = 0; i < length; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
