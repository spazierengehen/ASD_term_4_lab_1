#pragma once
#include <vector>
using namespace std;
class Generator 
{

    vector<int> sampleResult;

    // завести набор построенных объектов - vector<vector>
    
    // конструктор с n,k

public:
    void GenerateAll();
    vector<int>& GetResult(int index);
};  

int Factorial(int n);
