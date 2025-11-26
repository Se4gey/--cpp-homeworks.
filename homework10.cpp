#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> num_map;
        
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            
            // Проверяем, есть ли complement в хеш-таблице
            if (num_map.find(complement) != num_map.end()) {
                // Возвращаем индексы в правильном порядке
                return {num_map[complement], i};
            }
            
            // Добавляем текущий элемент в хеш-таблицу
            num_map[nums[i]] = i;
        }
        
        return {}; // Гарантируется, что решение всегда существует
    }
};