public class Qus002 {
    public static String replaceSpace(StringBuffer str) {
          for(int i = 0; i < str.length();i++){
              if(str.charAt(i) == ' ' ) {


                  str.replace(i, i + 1, "%20");
              }

          }
    return  str.toString();
    }
    public static void main(String args[]){
        StringBuffer str = new StringBuffer("We Are Happy");
       // str.replace(1,2,"222");
        System.out.print(replaceSpace(str));
}
}
