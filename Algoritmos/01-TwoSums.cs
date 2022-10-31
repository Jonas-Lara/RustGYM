using System;
using System.Collections.Generic;

namespace Collections
{
    class Dictionary
    {
        public static void Main (string[] args)
        {
            int [] nums = {2, 11, 7, 15};
            int target = 9;

            Console.WriteLine("Objetivo = " + target);

            foreach (var num in nums)
                Console.Write("[{0}]", num);

            Console.WriteLine();
            var result = TwoSum(nums, target);

            Console.WriteLine("Resultado = [{0}, {1}]", result[0], result[1]);
            // foreach (var item in result)
            //     Console.Write("[{0}]", item);

        }
        public static int[] TwoSum(int[] nums, int target)
        {
            var dic = new Dictionary<int, int>();

            for (int i = 0; i < nums.Length; i++)
            {
                if (dic.ContainsKey(nums[i])) //Si el diccionario contiene la clave, 2 cumple, 11 no cumple, 
                    return new int[] { dic[nums[i]], i }; //retorna el valor de la clave y el indice
                else
                    dic[target - nums[i]] = i; //9 - 2 = 7, 9 - 11 = - 2, 9 - 7 = 2
                    //Hashmap= 2 : 0, 11 : 1, 7 : 2
            }

            return new int[] { };
        }
    }
}