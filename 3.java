import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Scanner scanner = new Scanner(System.in);
		
		System.out.print("Enter your name: ");
		String name = scanner.nextLine();
		name = name.trim().toLowerCase();
		
		if (name.equals("bob") || name.equals("alice")) 
			System.out.println("\n\nWelcome back, " + name + "!");
		else { System.out.println("\n\nUSER NOT FOUND"); }
	}

}
