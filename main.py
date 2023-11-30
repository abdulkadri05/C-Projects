from bankOOP import Bankkonto, Sparekonto, BSUKonto
from login import LogIn

def main():
    print("----------------------------------------------")



    welcome_message = "Welcome to the Bank Of America"
    login = LogIn(welcome_message, None, None)

    while True:
        print("1. login")
        print("2. Exit")
        choice = input("Enter your choice (1-2): ")
        if choice == "1":
            print("------------------Login-----------------------")
            login.signIn()
            break
        elif choice == "2":
            print("Exiting the program. Goodbye!")
            break
        else:
            print("Invalid choice. Please enter a number between 1 and 5.")



if __name__ == "__main__":
    main()
