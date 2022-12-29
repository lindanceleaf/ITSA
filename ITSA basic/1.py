try:
    while(1):
        data = input()

        height = []
        for i in range(5):
            height.append([])

        l = len(data)
        for i in range(l):
            if i != 0:
                height[0].extend(" ")
                height[1].extend(" ")
                height[2].extend(" ")
                height[3].extend(" ")
                height[4].extend(" ")
            if data[i] == '0':
                height[0].extend("*****")
                height[1].extend("*   *")
                height[2].extend("*   *")
                height[3].extend("*   *")
                height[4].extend("*****")
            elif data[i] == '1':
                height[0].extend("    *")
                height[1].extend("    *")
                height[2].extend("    *")
                height[3].extend("    *")
                height[4].extend("    *")
            elif data[i] == '2':
                height[0].extend("*****")
                height[1].extend("    *")
                height[2].extend("*****")
                height[3].extend("*    ")
                height[4].extend("*****")
            elif data[i] == '3':
                height[0].extend("*****")
                height[1].extend("    *")
                height[2].extend("*****")
                height[3].extend("    *")
                height[4].extend("*****")
            elif data[i] == '4':
                height[0].extend("*   *")
                height[1].extend("*   *")
                height[2].extend("*****")
                height[3].extend("    *")
                height[4].extend("    *")
            elif data[i] == '5':
                height[0].extend("*****")
                height[1].extend("*    ")
                height[2].extend("*****")
                height[3].extend("    *")
                height[4].extend("*****")
            elif data[i] == '6':
                height[0].extend("*****")
                height[1].extend("*    ")
                height[2].extend("*****")
                height[3].extend("*   *")
                height[4].extend("*****")
            elif data[i] == '7':
                height[0].extend("*****")
                height[1].extend("    *")
                height[2].extend("    *")
                height[3].extend("    *")
                height[4].extend("    *")
            elif data[i] == '8':
                height[0].extend("*****")
                height[1].extend("*   *")
                height[2].extend("*****")
                height[3].extend("*   *")
                height[4].extend("*****")
            elif data[i] == '9':
                height[0].extend("*****")
                height[1].extend("*   *")
                height[2].extend("*****")
                height[3].extend("    *")
                height[4].extend("    *")
        
        for i in range(5):
            for j in height[i]:
                print(j, end='')
            print("")
except EOFError:
    pass