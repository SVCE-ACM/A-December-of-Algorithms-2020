def findRoute(points, x, y, runway):
    mini_dist = 100000000
    index = -1

    for ind, i in enumerate(points):
        if i[1] >= y and i[2] >= runway:
            distance = int((((i[0] - x)**2) + ((i[1]-y)**2)))
            if(mini_dist > distance):
                mini_dist = distance
                index = ind

    if(index == -1):
        print("No path found\n")
    else:
        for i in range(0, abs(points[index][1] - y)):
            print("Straight", end=" ")

        if(x > points[index][0]):
            print("Left", end=" ")
        else:
            print("Right", end=" ")

        for i in range(0, abs(points[index][0] - x)):
            print("Straight", end=" ")


x, y, runway = 0, 0, 1000
points = [[-2, 1, 200], [2, 2, 1500],
          [-5, -5, 4000], [-3, 5, 2100], [-4, 3, 1009]]

findRoute(points, x, y, runway)
