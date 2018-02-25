public class Student {
    private String firstName;
    private String lastName;
    private String studentNo;

    void setFirstName(String fName) {
        firstName = fName;
    }

    String getFirstName() {
        return firstName;

    }

    void setLastName(String lName) {
        lastName = lName;
    }

    String getLastName() {
        return lastName;

    }

    void setStudentNo(String studentNo) {
        if (studentNo.length() == 9 && studentNo.startsWith("B")) {
            this.studentNo = studentNo;
        }
    }

    String getStudentNo() {
        return studentNo; //class var
    }

    @Override
    public boolean equals(Object obj) {
        if (obj instanceof String) {
            String compareString = (String) obj;
            return this.getStudentNo().equals(compareString);
        }
        return false;
    }
}