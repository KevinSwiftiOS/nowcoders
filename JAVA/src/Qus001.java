import java.util.Scanner;

public class Qus001 {
    public static boolean Find(int target ,int [][]array){
        //进行数组遍历
        for(int x = 0; x < array.length;x++){
            for(int y = 0; y < array[x].length;y++){
                if(array[x][y] == target)
                    return true;
            }
        }
        return false;
    }


    public static void main(String args[]){
        int  a[][] = new int[10][10];
        Scanner scanner = new Scanner(System.in);
        for(int i  = 0; i < 2;i++){
            for(int j = 0; j < 2;j++){

                a[i][j] = scanner.nextInt();
            }
        }
        int target;
        target = scanner.nextInt();
        System.out.print(Find(target,a));
    }

}
