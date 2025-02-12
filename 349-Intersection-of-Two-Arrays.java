import java.util.*;
class Solution {
    public int[] intersection(int[] nums1, int[] nums2) {
        HashMap<Integer,Integer> map2=new HashMap<>();
        HashMap<Integer,Integer> map1=new HashMap<>();
        
        for(int it:nums1){
            map1.put(it,map1.getOrDefault(it,0)+1);
        }
        for(int it:nums2){
            map2.put(it,map2.getOrDefault(it,0)+1);
        }

        ArrayList<Integer> list=new ArrayList<>();

        
        
        for(HashMap.Entry<Integer,Integer> it:map1.entrySet()){
            if(map2.containsKey(it.getKey())==true){
                list.add(it.getKey());
            }
        }
        int arr[] = new int[list.size()];
        int index=0;
        for(int it:list){
            arr[index++]=it;
        }

        return arr;
    }
}