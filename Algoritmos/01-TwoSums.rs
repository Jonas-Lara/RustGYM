use std::collections::HashMap;

fn two_sums(nums: &[i32], target: i32) -> Vec<i32> 
{
    let mut map = HashMap::new();

    for i in 0..nums.len()
    {
        let j = target - nums[i];
        if map.contains_key(&j)
        {
            return vec![*map.get(&j).unwrap() as i32, i as i32];
        }
        map.insert(nums[i], i);
    }
    vec![]
}

fn main()
{
    let nums = vec![2, 11, 15, 18, 7];
    let target: i32 = 9;
    let result: Vec<i32> = two_sums(&nums, target);
    println!("{:?}", result);

}