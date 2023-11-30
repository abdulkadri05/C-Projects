from bankOOP import Bankkonto, Sparekonto, BSUKonto

bankKonto = Bankkonto(0, "a", "a")
spareKonto = Sparekonto(0, "a", "a")
bsuKonto = BSUKonto(0, "a", "a")

class LogIn:
    def __init__(self, welcomeMessage, username, password):
        print(welcomeMessage)



    def signIn(self):
        self.username = input("Enter your username: ")
        self.password = input("Enter your password: ")

        if self.username == "admin" and self.password == "admin":
            print("Login successful! You are now logged in as admin.")
            self.signedinADMIN()
        else:
            # Call a function HERE that signs you in as a customer
            print("Login failed. Invalid username or password.")



    def signedinADMIN(self):
        while True:
            print("1. Withdraw from Bankkonto")
            print("2. Withdraw from Sparekonto")
            print("3. Withdraw from BSUKonto")
            print("4. Display Account Information")
            print("5. Exit")

            choice = input("Enter your choice (1-5): ")

            if choice == "1":
                amount = input("Enter the withdrawal amount: ")
                bankKonto.taUtPenger(amount)
            elif choice == "2":
                amount = input("Enter the withdrawal amount: ")
                spareKonto.taUtPenger(amount)
            elif choice == "3":
                amount = input("Enter the withdrawal amount: ")
                bsuKonto.taUtPenger(amount)
            elif choice == "4":
                print("Account Information:")
                bankKonto.displayAccountInfo()
            elif choice == "5":
                print("Exiting the program. Goodbye!")
                break
            else:
                print("Invalid choice. Please enter a number between 1 and 5.")
