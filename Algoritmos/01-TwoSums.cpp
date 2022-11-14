#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int>& A, int target) 
{
   unordered_map<int, int> m;
	for (int i = 0; i < A.size(); ++i) 
	{
		int t = target - A[i];
		if (m.count(t)) return { m[t], i };
        m[A[i]] = i;
    }
        return {};
}

int main()
{
    vector <int> a = {2, 7, 11, 15};
    int target = 9;

    vector <int> result = twoSum(a, target);
    
    for (int i = 0; i < result.size(); i++)
    {
        cout << "["<<result[i] << "]";
    }
}
