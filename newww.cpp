#include<iostream>
using namespace std;

void input(int arr[]);
void large(int arr[]);

int main(){
    int arr[10];
    input(arr);
    large(arr);
    return 0;
}

void input(int arr[]){
    for(int i = 0; i < 10; i++){
        std::cout << "Enter the value of " << i + 1 << ": ";
        std::cin >> arr[i];
    }
}

void large(int arr[]){
    int temp = arr[0];  // Initialize temp with the first element of the array
    for(int i = 1; i < 10; i++){  // Start loop from the second element
        if (arr[i] > temp){
            temp = arr[i];
        }
    }
    std::cout << "The largest Number is: " << temp;
}

