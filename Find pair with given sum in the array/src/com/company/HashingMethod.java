package com.company;

import java.util.HashMap;
import java.util.Map;

public class HashingMethod {

    public static void getPairOfSum(int num[],int sumItem){
        Map<Integer,Integer> map=new HashMap<>();
        for(int i=0;i<num.length;i++)
        {
            if(map.containsKey(sumItem-num[i]))
            {
                System.out.println("Found Pairs on "+ map.get(sumItem-num[i])+ " "+ i);
                return;
            }
            map.put(num[i],i);
        }
    }
}
