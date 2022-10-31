#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    cout << "Vectores"  <<endl; 

    vector <int> vec;

    vector <int> vec2(4);

    vector <int> vec3(4, 0);

    int n = 6;

    vector <int> vec4 (n, 0);

    vec4[2] = -1;
    vec4[3] = 2;

    vec4.push_back(4);
    vec4.pop_back();

    vec4.insert(vec4.begin() + 2, 4);

    vec4.erase(vec4.begin() + 1);


    for(int i = 0; i < vec4.size(); i++)
    {
        cout << vec4[i] << " ";
    }
    cout << endl;

    sort(vec4.begin(), vec4.end());


    return 0;
}