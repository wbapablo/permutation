// Example program
#include <iostream>
#include <string>
#include <vector>
void permutation(std::vector<int> &data, int i, int length);

void swap(std::vector<int> &data,int x,int y);

void printArray(std::vector<int>&data,int count);

int main(){
    std::vector<int> data(5);
    for(int i=0; i<5 ;i++){
        data[i]=i;
    }
    permutation(data,0,5);
}

void permutation(std::vector<int> &data, int i, int length){
    if (length ==i ){
        printArray(data, length);
        return;
    }
    int j=i;
    for(j=i; j<length;j++){
        swap(data,i,j);
        permutation(data,i+1,length);
        swap(data,i,j);
    }
    return;
}

void swap(std::vector<int> &data,int x,int y){
    int temp = data[x];
    data[x] = data[y];
    data[y] = temp;
    return;
}

void printArray(std::vector<int>&data,int count){
 std::cout<<"Values stored are:";
 for(int i=0;i<count; i++){
    std::cout<<""<<data[i];
 }
 std::cout<<std::endl;
}
