// Bubble Sort 冒泡排序
// author:zjcao

#include <iostream>
using namespace std;
int main()
{
    // 输入n个数 (1000以内)
    // 先输入数字个数，然后依次输入需要排序的数字。
    int n, a[1000];
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    // 冒泡排序算法，不断比较相邻的两个数，如果顺序错了，那么就交换
    for (int i=0; i<n; i++){
        for (int j=1; j<n-i; j++){
            if(a[j-1] > a[j]){
                int temp = a[j];
                a[j] = a[j-1];
                a[j-1] = temp;
            }
        }
    }

    // 输出显示
    for (int i=0; i<n; i++){
        cout << a[i] << endl;
    }


    return 0;
}