class Publisher:
    def __init__(self,name):
        self.name=name
        def display(self):
            print(self.name)
class Book(Publisher):
    def __init__(self,name,title,author):
        Publisher.__init__(self,name)
        self.title=title
        self.author=author
        def display(self):
            print(self.title)
            print(self.author)
class Python(Book):
    def __init__(self,name,title,author,price,pages):
        Book.__init__(self,name,title,author)
        self.price=price
        self.pages=pages
    def display(self):
            print(self.name)
            print(self.title)
            print(self.author)
            print(self.price)
            print(self.pages)
val=Python("Arun Publications","Python Programming","Arun",500,2500)
val.display()
