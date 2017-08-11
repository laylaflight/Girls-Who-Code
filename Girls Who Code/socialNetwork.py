# class for the User of our Social Network
class User:

    # constructor for our User
    def ___init__(self):
        self.name = ""          # name of the user
        self.id = NONE          # number ID of the user
        self.connections = []   # list of friends (init. is empty)

    # function/method for adding friend
    def addFriend(self,friend):
        self.connections.append(friend)

    # function/method for printing name of user (replace pass)
    def printUserName(self):
        print (self.users)


    # function/method for printing user ID (replace pass)
    def printUserID(self):
        print(self.id)



    # function/method for assigning userName
    def assignUserName(self):
        self.name = input("What would you like your username to be?: ")

    # function/method for printing friends list (replace pass)
    def printFriendsList(self):
        for i in self.connections:
            print(i.name)


class Network:

    # constructor for the Network class (only init. empty list of users)
    def __init__(self):
            self.users = []

    # function/method for printing out the users (replace pass)
    def printUsers(self):
        for i in self.users:
            print (i.name)


    # function/method for adding users to the social network
    def addUser(self):
        newUser = User()
        newUser.assignUserName()
        self.users.append(newUser)

    # function for adding connection to user (replace pass)
    def addConnectionToUser(self):
        name = input("Which user do you want to connect to?:")
        # somewhere before you will ask for an input and assign to userName
        name = input("Which friend do you want to add?")
        # ask for another input of the friend they want to add
        
        # somewhere you'll run self.findUser(userName)
        # then you'll run self.findUser(friendName)
        # after you've found them
        # run the addFriend command from the user
        # run the addFriend command on the friend
        pass

    # function/method for printing connections of a user (replace pass)
    def printConnectionsOfUser(self):
        # somewhere before you will ask for an input and assign to userName
        # somewhere in here you're going to use self.findUser(userName)
        pass

    #function/method for finding a user in the network
    def findUser(self, nameToSearch):
        # parse through users one at a time
        for i in self.users:
            if i.name == nameToSearch:
                return i

    # function/method for starting/keeping open the social network
    def welcomeOrKeepMeOpen(self):
        print("Type (a) to add user")
        print("Type (ac) to add connection")
        print("Type (p) to print users")
        print("Type (c) to print connections")
        print("Type (q) to quit")

        welcomePromptAnswer = input()

        if welcomePromptAnswer == "a":
            self.addUser()
        elif welcomePromptAnswer == "ac":
            self.addConnectionToUser()
        elif welcomePromptAnswer == "p":
            self.printUsers()
        elif welcomePromptAnswer == "c":
            self.printConnectionsOfUser()
        elif welcomePromptAnswer == "q":
            self.quit()


    #function for leaving the social network
    def quit(self):
        exit()



newSocialNetwork = Network()

while True:
    newSocialNetwork.welcomeOrKeepMeOpen()
