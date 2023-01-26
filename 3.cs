// See https://aka.ms/new-console-template for more information
string bob = "Bob", alice = "Alice";
System.Console.Write("Enter your name: ");
string name = Console.ReadLine();
string Name = (char.ToUpper(name[0]) + name.Substring(1));
//Console.WriteLine(Name);
if (Name.Equals(bob) || Name.Equals(alice))
{
    Console.WriteLine("\nHello, " + Name);
}
else
{
    Console.WriteLine("\nWho are you?");
}
return 0;
