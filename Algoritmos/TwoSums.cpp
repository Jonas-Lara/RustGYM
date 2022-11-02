#include <vector>
#include <iostream>
#include <unordered_map>

/* Time: O(N log N) */
//std::vector <int> twoSum(std::vector <int>& array, int& target)
//{
//    int n = array.size();
//    for (int i = 0; i < n - 1; i++)
//        for (int j = i + 1; j < n; j++)
//        {
//            if (array[i] + array[j] == target)
//                return { i + 1 , j + 1 };
//        }
//    return {};
//}

/* Time O(N) */
std::vector<int> twoSum(std::vector<int>& array, int target) {
    std::unordered_map<int, int> map;
    for (int i = 0; i < array.size(); ++i) {
        int t = target - array[i];
        if (map.count(t)) return { map[t], i };
        map[array[i]] = i;
    }
    return {};
}

int main()
{
    std::vector <int> array = { 2, 7, 11, 15};
    int target = 9;
    for (int& x : twoSum(array, target))
        std::cout << x << " ";
    std::cout << '\n';

    std::cin.get();
}