#replaces spaces with %20
def makeURL(str):
    URL = str.replace(' ', '%20')
    print(URL)

makeURL("hello world this is a test")
