# 📝 LeetCode 1 - Two Sum

## 💡 Description

Given an array of integers `nums` and an integer `target`, return *indices* of the two numbers such that they add up to `target`.  
You may assume that each input would have **exactly one solution**, and you may not use the same element twice.  
You can return the answer in any order.

## 📥 Input

- An integer array `nums`.  
- An integer `target`.  

## 📤 Output

- An integer array with two indices `[i, j]` such that `nums[i] + nums[j] == target`.

### Example 1
**Input**  
nums = [2,7,11,15], target = 9  

**Output**  
[0,1]  

### Example 2
**Input**  
nums = [3,2,4], target = 6  

**Output**  
[1,2]  

### Example 3
**Input**  
nums = [3,3], target = 6  

**Output**  
[0,1]  

## 🔒 Constraints

- 2 ≤ nums.length ≤ 10⁴  
- -10⁹ ≤ nums[i] ≤ 10⁹  
- -10⁹ ≤ target ≤ 10⁹  
- Only **one valid answer** exists.  
