
package CDAC_Assignment_Management;


import java.time.LocalDateTime;
import static java.time.LocalDateTime.now;
import java.util.*;

class Student{
    public String name;
    private int prnNo;
   // private Assignment assignment1;

    public Student() {
    }

    
    public Student(String name, int prnNo) {
        this.name = name;
        this.prnNo = prnNo;
    }

    void studentDetails(){
        System.out.println("-------------Student Details----------------");
        System.out.println("Student Name: "+name);
        System.out.println("Student PRN Number : "+prnNo);
        
    }
}

class Trainer{
    private String name;
    private Assignment assignment2;

    public Trainer() {
    }

    
    public Trainer(String name, Assignment assignment2) {
        this.name = name;
        this.assignment2 = assignment2;
    }
    
    
    void trainerDetails(){
        System.out.println("-------------Assignment details----------------");
        System.out.println("Trainer Name : "+name);
        System.out.println("Student Assignment Details : "+assignment2);
    }
}

class Assignment{
    private String title;
    private LocalDateTime Date;
    private String Description;
    private String Assignee;            //students name

    public Assignment() {
    }

    public Assignment(String title, LocalDateTime Date, String Description, String Assignee) {
        this.title = title;
        this.Date = Date;
        this.Description = Description;
        this.Assignee = Assignee;
    }

    @Override
    public String toString() {
        return "Assignment{" + "title of assignment=" + title + ", Date of assignment=" + Date + ", Assignment Description=" + Description + ", Assignment Assignee Name=" + Assignee + '}';
    }
    
    
}
public class AssignmentManager {
    public void createAssignment(){
        Scanner sc=new Scanner(System.in);
        
        System.out.println("Enter student name and prn No :");
        Student stud=new Student(sc.next(),sc.nextInt());
        
        System.out.println("Enter assignment details 1.title  2.description  3.name of assignee :");
        Assignment ass1=new Assignment(sc.next(),now(),sc.next(),sc.next());
        
        System.out.println("Enter trainer name : ");
        Trainer tr=new Trainer(sc.next(), ass1);
        
        System.out.println("....................Assignment created.................");
    }
    
    public void addAssignment(){
       Vector<Assignment> v= new Vector<>();
       
       Assignment a1=new Assignment("JavaTest_1",now(), "Description1", "Assignee1");
       Assignment a2=new Assignment("JavaTest_2",now(), "Description2", "Assignee2");
       Assignment a3=new Assignment("JavaTest_3",now(), "Description3", "Assignee3");
       
       v.add(a1);
       v.add(a2);
       v.add(a3);
       
       
    }
    public void saveAssignment(){
        
        
    }
    public void loadAssignment(){
        
    }
    public void showAssignments(){           //info of trainer, student and assignment
        Student s=new Student();
        s.studentDetails();
        Trainer t=new Trainer();
        t.trainerDetails();
        
    }
    
    
    public static void main(String[] args) {
       AssignmentManager assignM=new AssignmentManager();
       
        
        
        while(true){
            System.out.println("Cdac Assignment Management : \n 1.create assignment \n 2.add assignment to collection \n 3.show assignment \n 4.save assignment to file \n 5.load assignment");
        Scanner sc=new Scanner(System.in);
        int option=sc.nextInt();
        
            switch(option) {
                case 1 :
                    assignM.createAssignment();
                    break;
                
                case 2:
                    assignM.addAssignment();
                    break;
                    
                case 3 :
                    assignM.showAssignments();
                    break;
                    
                case 4 :
                    assignM.saveAssignment();
                    break;
                    
                case 5 :
                    assignM.loadAssignment();
                    break;
            }
                   
        }
     }
}
