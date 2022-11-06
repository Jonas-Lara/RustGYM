using System;
using System.Collections.Generic;

namespace TwoSums
{
    class Program
    {
        public static void Main (string[] args)
        {
            int[] nums = { 2, 7, 11, 15 };
            int target = 9;
            int[] result = TwoSum (nums, target);
            Console.WriteLine ("Input: nums = {0}, target = {1}", string.Join (", ", nums), target);
            Console.WriteLine ("Output: [" + result[0] + "," + result[1] + "]");

        }

        public static int[] TwoSum(int[] nums, int target)
        {
            var dic = new Dictionary<int, int>();

            for (int i = 0; i < nums.Length; i++)
            {
                if (dic.ContainsKey(nums[i]))
                    return new int[] { dic[nums[i]], i };
                else
                    dic[target - nums[i]] = i;
            }

            return new int[] { };
        }
    }
}