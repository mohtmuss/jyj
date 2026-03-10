import add_guess

def display():
    while True:
        print("\n\n\n\t\tWelcome to Awash Hotel\n")

        print("a: To add guest")
        print("m: To modify guest")
        print("r: To remove guest")
        print("q: Quit")

        choice = input("Enter here: ")

        match choice:
            case 'a':
                add_guess.adding_guess()

            case 'm':
                print("Clicked modify guest")

            case 'r':
                print("Clicked remove guest")

            case 'q':
                print("Exiting program...")
                break

            case _:
                print("Invalid option. Try again.")
                

   