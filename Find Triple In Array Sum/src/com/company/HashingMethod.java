package com.company;

import java.util.HashMap;
import java.util.Map;

public class HashingMethod {
    public static boolean findTriple(int []num,int sumItem)
    {
        Map<Integer,Integer> map=new HashMap<>();
        for(int i=0;i<num.length;i++)
        {
            map.put(num[i],i);
        }

        for(int i=0;i<num.length-1;i++)
        {
            for (int j=i+1;j<num.length;j++)
            {
                int val=sumItem-(num[i]+num[j]);

                if(map.containsKey(val))
                {
                    if(map.get(val)!=i && map.get(val)!=j)
                    {
                        return  true;
                    }
                }
            }
        }
        return false;
    }
}
