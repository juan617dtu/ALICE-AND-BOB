name = input("\nEnter your name: ")
name = name.strip()

if name.title() == "Bob" or name.title() == "Alice":
    print("\n\nWelcome back, " + name.title() + "!\n\n")
else:
    print("\n\nERROR: Unknown user\n\n\t\t\tUser " + name + " not found in the system.\n\n")
