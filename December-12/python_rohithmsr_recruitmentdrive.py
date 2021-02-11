# ### Recruitment Drive

import urllib
import math


# Referenece : https://machinelearningmastery.com/logistic-regression-tutorial-for-machine-learning/


def getData():
    csv_link = "https://raw.githubusercontent.com/SVCE-ACM/A-December-of-Algorithms-2020/main/src/assets/RECRUITMENT%20DRIVE%20-%20Sheet1.csv"
    file = urllib.request.urlopen(csv_link)
    data = []
    line_count = 0
    
    for row in file:
        if(line_count == 0):
            line_count += 1;
            continue;
        row = row.decode('utf-8')
        values = row.split('\r\n')
        values = values[0].split(',')
        data.append(values)
        
    return data

def predict(x1,x2,b0,b1,b2):
    s =  b0 + (b1*x1) + (b2*x2)
    output = -1 * float(s)
    return 1.0/(1 + math.exp(output))

def stochastic_gradient(data, b0, b1, b2):
    alpha = 0.3 #learning_rate
    for row in data[1:]:
        x0 = 1.0 #bias
        x1,x2 = float(row[0]),float(row[1])
        y = float(row[2])
        prediction = predict(x1,x2,b0,b1,b2)
        b0 = b0 + (alpha * (y - prediction) * prediction * (1 - prediction) * x0)
        b1 = b1 + (alpha * (y - prediction) * prediction * (1 - prediction) * x1)
        b2 = b2 + (alpha * (y - prediction) * prediction * (1 - prediction) * x2)
    return b0,b1,b2,data[1][2] # denotes which class(Selected / Not Selected) taken first


def isAdmitted(gpa, work):
    data = getData()
    b0,b1,b2 = 0.0,0.0,0.0
    
    # repeated until the model is accurate enough (e.g. error drops to some desirable level)
    # or for a fixed number iterations.
    for i in range(0,200):
        b0,b1,b2,typ = stochastic_gradient(data, b0, b1, b2)
    
    if(typ == 0):
        if (predict(gpa, work, b0, b1, b2) >= 0.5):
            return 'Not Selected'
        return 'Selected'
    else:
        if (predict(gpa, work, b0, b1, b2) >= 0.5):
            return 'Selected'
        return 'Not Selected'


# ## Answer for the testcase

gpa, work = input().split()
gpa, work = float(gpa), float(work)
print(isAdmitted(gpa, work))


# ## Accuracy of the model

def findClass(gpa,work,b0,b1,b2,typ):
    if(typ == 0):
        if (predict(gpa, work, b0, b1, b2) >= 0.5):
            return 0
        return 1
    else:
        if (predict(gpa, work, b0, b1, b2) >= 0.5):
            return 1
        return 0

data = getData()
correct_predictions = 0
no_of_predictions = 0

## train the model
b0,b1,b2 = 0.0,0.0,0.0
for i in range(0,200):
    b0,b1,b2,typ = stochastic_gradient(data, b0, b1, b2)
    
for i in data:
    if(findClass(float(i[0]),float(i[1]),b0,b1,b2,typ) == int(i[2])):
        correct_predictions += 1
    no_of_predictions += 1

accuracy = (correct_predictions/no_of_predictions) * 100

print(f'{accuracy}%')
## i can achieve utmost 80% accuracy only (very low data)

