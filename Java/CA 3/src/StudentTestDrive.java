public class StudentTestDrive{
    public static void main(String[] args){

        Student s1 = new Student();  //make student object

        //test1
        s1.setFirstName("Tae");

        if(s1.getFirstName().equals("Tae"))
        {
            System.out.println("Test 1 passed.");
        }
        else
        {
            System.out.println("Test 1 failed.");
        }


        //test2
        s1.setLastName("Lunar");

        if(s1.getLastName().equals("Lunar"))
        {
            System.out.println("Test 1 passed.");
        }
        else
        {
            System.out.println("Test 1 failed.");
        }


        //test3
        s1 = new Student();
        s1.setStudentNo("B00001234");

        if(s1.getStudentNo().equals("B00001234"))
        {
            System.out.println("Test 3 passed.");
        }
        else
        {
            System.out.println("Test 3 failed.");
        }

        //test4
        s1 = new Student();
        s1.setStudentNo("hello");

        if(s1.getStudentNo()== null)
        {
            System.out.println("Test 4 passed.");
        }
        else
        {
            System.out.println("Test 4 failed.");
        }

        //test5
        s1 = new Student();
        s1.setStudentNo("b00001234");

        if(s1.getStudentNo() == null)
        {
            System.out.println("Test 5 passed.");
        }
        else
        {
            System.out.println("Test 5 failed.");
        }

        //test6
        s1 = new Student();
        s1.setStudentNo("B0001234");

        if(s1.getStudentNo() == null)
        {
            System.out.println("Test 6 passed.");
        }
        else
        {
            System.out.println("Test 6 failed.");
        }
    }

}