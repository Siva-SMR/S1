class Bankaccount:
    def __init__(self,name):
        self.name=name
        self.balance=0
        print(self.name,"account created successfully")
    def deposit(self):
        self.amount=int(input("Enter the amount to be deposited: "))
        self.balance+=self.amount
        print("Available balance: ",self.balance)
    def withdraw(self):
        self.withdraw=int(input("Enter the amount to be withdrawn: "))
#        if self.balance<self.withdraw:
#           print("Insufficent balance")
#        else:
#            self.balance-=self.withdraw
#            print(self.withdraw)
#            print("Current balance: ",self.balance)
        self.balance-=self.withdraw
        print(self.withdraw)
        print("Current balance: ",self.balance)
    def display(self):
        print(self.balance)
user=Bankaccount("Siva")
user.display()
user.deposit()
user.withdraw()
