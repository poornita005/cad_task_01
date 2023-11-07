
package surprizetest;

import java.io.*;
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;
import java.util.Date;

class Student{
    String name;
    int prnNo;
  public  Student(String name ,int prnNo){
        this.name=name;
        this.prnNo=prnNo;
     }
}
  
class Trainer{
    String name;
    
   public Trainer(String name ){
            this.name=name;}
}

class Assignment{
    String Title;
    Date date;
    String description;
    Student  Assignee;
    Trainer t;
    
    public Assignment(String Title,Date date,String description ,String Assignment ,Student  assignee,Trainer t){
        this.Title=Title;
        this.date=date;
        this.description=description;
        this.Assignee=Assignee;
        this.t=t;
    }
    
}
class AssignmentManager{
    private List<Assignment> assignments = new ArrayList<>();
    private List<Student> students = new ArrayList<>();
    private List<Trainer> trainers = new ArrayList<>();
    public void createAssignment() {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter assignment title: ");
        String Title = scanner.nextLine();

        System.out.print("Enter assignment date: ");
        String date = scanner.nextLine();

        System.out.print("Enter assignment description: ");
        String description = scanner.nextLine();

        System.out.print("Enter student's PRN number for assignment: ");
        int  prnNo = scanner.nextInt();
        
}
      public void showAssignments(){
          if(assignments.isEmpty())
              System.out.println("assignment deny");  
          else{
              for(Assignment a:assignments){
                  System.out.println("Title: " + a.Title);
                System.out.println("Date: " + a.date);
                  System.out.println("Description: " + a.description);
                System.out.println("Assignee: " + a.Assignee.name);
                System.out.println("trainer who is create assingment: " + a.t.name);
                System.out.println();
                  
              }
          }
      }
         
      
    
       private Student searchStudent(int prnNo) {
        for (Student stud : students) {
            if(stud.prnNo==prnNo) {
                return stud;
            }
        }
        return null;
    }

       
        private Trainer searchTrainer(String name) {
        for (Trainer trainer : trainers) {
            if (trainer.name.equals(name)) {
                return trainer;
            }
        }
        return null;
    }
 public void saveAssignmentsToFile(String filename) {
        try (ObjectOutputStream outputStream = new ObjectOutputStream(new FileOutputStream(filename))) {
            outputStream.writeObject(assignments);
            System.out.println("Assignments saved to file.");
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

      
       public void addStudent(Student student) {
        students.add(student);
    }

    public void addTrainer(Trainer trainer) {
        trainers.add(trainer);
    }
       }



public class AssignmentManagement {
    
    
    
    
    public static void main(String[] args) {
        AssignmentManager am = new AssignmentManager();
        Scanner scanner = new Scanner(System.in);

        while (true) {
            System.out.println("\nAssignment Manager choose your option");
            System.out.println("1. Create Assignment");
            System.out.println("2. Show Assignments");
            System.out.println("3. Save Assignments to File");
            System.out.println("4. Load Assignments from File");
            System.out.println("5. Exit");
            System.out.print("Enter your choice: ");

            int choice = scanner.nextInt();
            scanner.nextLine(); 

            switch (choice) {
                case 1:
                    am.createAssignment();
                    break;
                case 2:
                    am.showAssignments();
                    break;
                case 3:
                    System.out.print("Enter the filename to save assignments: ");
                    String filename = scanner.nextLine();
                    am.saveAssignmentsToFile(filename);
                    break;
//                case 4:
//                    System.out.print("Enter the filename to load assignments: ");
//                    filename = scanner.nextLine();
//                    am.loadAssignmentsFromFile(filename);
//                    break;
                case 5:
                    System.out.println("Exiting...");
                    System.exit(0);
                default:
                    System.out.println("Invalid choice. Please choose a valid option.");
            }
        }
    }
}

    
