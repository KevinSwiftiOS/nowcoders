import java.util.Stack;

public class Qus005 {
    public static boolean IsPopOrder(int [] pushA,int [] popA) {
       boolean isPossibal = false;
       if(pushA != null && popA != null){
           Stack<Integer> stack = new Stack<Integer>();
           int i = 0,j = 0;
           //检查出战
           while(j < popA.length){
               while (i < pushA.length && pushA[i] != popA[j]){
                   stack.push(pushA[i]);
                   i++;

               }
               i++;
               j++;
               while(!stack.empty() && j < popA.length){
                   int top = 0;
                   if((top = stack.pop()) == popA[j]){
                       j++;
                   }else {
                       stack.push(top);
                       break;
                   }
               }
               if(i >= pushA.length && stack.isEmpty())
                   isPossibal = true;
           }
       }
       return isPossibal;
    }
    public static void main(String args[]){
       int a[] = {1,2,3,4,5,6};
        int b[] = {5,6,4,3,2,1};
        System.out.println(IsPopOrder(a,b));
    }
}
