import java.util.Scanner;

class  Census{
    private int id;
    private String name;
    private int count;

    public Census (int id,String name,int count) {
        this.id=id;
        this.name=name;
        this.count=count;
    }

    public void getid(int id) {
        this.id=id;
    }

    public void getname(String name) {
        this.name=name;
    }

    public void getcount(int count) {
        this.count=count;
    }

    public int putid() {
        return id;
    }
    public String putname () {
        return name;
    }
    public int putcount() {
        return count;
    }

}

class Maxcount{
    // public static int flag=1;  //static
    public static int maxcount=0;
    public static String name;
    public Maxcount(String name1,int count1)
    {
      /*  if(flag == 1){
            name = name1;
            maxcount = count1;
            flag = 0;

      } */
        if(maxcount<=count1)
        {
            maxcount=count1;
            name = name1;
        }
    }
    // public int put() {
    //   return flag;
    //}
}

public class Qus002 {
    public static void main(String args[])
    {
        Scanner input= new Scanner(System.in);

        System.out.println("Id Name Count");

        Census s[]=new Census[100];
        int i=0;

        while(input.hasNext()) {

            int id=input.nextInt();
            if(id==0)
                break;
            String name=input.next();
            int count=input.nextInt();


            Census a =new Census(id,name,count);
            a.getid(id);
            a.getname(name);
            a.getcount(count);

            Maxcount n=new Maxcount(a.putname(),a.putcount());

            s[i]=a;
            i++;

        }
        System.out.println(i);
        for(int j=0;j<i;j++)
            System.out.println(s[j].putid()+" "+s[j].putname()+" "+s[j].putcount());

        System.out.print("Max:"+Maxcount.name);
    }
}
