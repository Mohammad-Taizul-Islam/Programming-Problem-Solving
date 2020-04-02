package com.company;

import java.util.Arrays;

public class NLogNMethod {

    public void getPairOfSum(int num[],int sumItem){
        Arrays.sort(num);
        int low=0;
        int high=num.length-1;

        while (low<high)
        {
            if((num[low]+num[high])==sumItem){
                System.out.println("Pair is found on index : "+num[low] + " "+num[high]);
                return;
            }else if((num[low]+num[high])<sumItem)
            {
                low++;
            }else {
                high--;
            }
        }

    }
}
