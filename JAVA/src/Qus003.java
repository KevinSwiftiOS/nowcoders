public class Qus003 {
    public static String replaceSpace(StringBuffer str) {
        for(int i = 0; i < str.length();i++){
            if(str.charAt(i) == ' ')
                System.out.print(str.charAt(i));
        }
        return  str.toString();
    }
    public static void main(String args[][]){
        StringBuffer str = new StringBuffer("We Are Happy");
        System.out.print(replaceSpace(str));
    }
}
