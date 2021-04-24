import java.util.Scanner;

public class OOP {
    String Name;
    static Long Year;
    String Address;

    void insertRecord(String name, Long year, String address) {
        Name = name;
        Year = year;
        Address = address;
    }

    void displayDetails() {
        System.out.println(Name + " " + Year + " " + Address);
    }

    public static void main(String args[]) {
        OOP s[] = new OOP[100];
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        for (int i = 0; i < n; i++)
            s[i] = new OOP();

        for (int j = 0; j < n; j++) {
            System.out.println(" ");
            String Name = sc.next();
            Long Year = sc.nextLong();
            String Address = sc.next();
            s[j].insertRecord(Name, Year, Address);
        }
        for (int m = 0; m < n; m++) {
            s[m].displayDetails();
        }

    }
}
