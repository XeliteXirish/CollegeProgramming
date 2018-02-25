import java.util.ArrayList;
import java.util.Scanner;

public class StudentInput {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        ArrayList<Student> studentStore = new ArrayList<>();

        for (int x = 0; x < 3; x++) {

            System.out.print("Please enter the first name: ");
            String firstName = scanner.nextLine();

            System.out.print("Please enter the last name: ");
            String lastName = scanner.nextLine();

            System.out.print("Please enter the student number: ");
            String studentNo = scanner.nextLine();

            Student student = new Student();
            student.setFirstName(firstName);
            student.setLastName(lastName);
            student.setStudentNo(studentNo);

            studentStore.add(student);
        }

        /*
         * Print out student details
         */
        for (Student s : studentStore) {
            System.out.println(s.getFirstName());
            System.out.println(s.getLastName());
            System.out.println(s.getStudentNo());
        }

        /*
         * Checks if the input student number is in the list
         * Part 3
         */
        System.out.print("Please enter a student number to search for: ");
        String searchNumber = scanner.nextLine();
        for (Student s : studentStore) {
            if (s.getStudentNo().equals(searchNumber)) {
                System.out.println(s.getFirstName());
                System.out.println(s.getLastName());
                System.out.println(s.getStudentNo());
            }
        }

        /*
         * Using overridden equals method
         * Part 4
         */
        System.out.print("Please enter a student number to search for: ");
        String searchNumberEquals = scanner.nextLine();
        System.out.println("Student in the list: " + studentStore.contains(searchNumberEquals));


    }
}
