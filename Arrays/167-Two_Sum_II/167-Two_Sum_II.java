package Arrays.167-Two_Sum_II;

public class 167-Two_Sum_II {
        int n = numbers.length;
        int low = 0, high = n-1;

        while(low < high){
            int twoSum = numbers[low] + numbers[high];
            if(twoSum == target ) return new int[]{low+1, high+1};
            else if(twoSum < target) low++;
            else high--;
        }
        return new int[]{};
}
