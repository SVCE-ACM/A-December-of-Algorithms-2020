<div align="left">
<h1>
    <img alt="header" src="/src/assets/Header.png" width="800"></img>
</h1>
Welcome to A December of Algorithms (2020). After overwhelming responses from previous years, we present you with a new collection of algorithms to implement this December. Each Day, Each Algorithm ;) Finish them all to get a certificate :)

**Send a pull request only after completing all 31 algorithms.**

**Please submit all PRs on or before January 10th 11:59 PM IST.**

## What Do I Do?
We have a small collection of algorithms, one for every day of the month. Scroll down to take a look at them. All you need to do is fork this repository, implement all 31  algorithms and send a pull request over to us. Check out our FAQ for more information.

## Index
  - [**December 1 - Sherlock's Quest**](#december-1---sherlocks-quest)
  - [**December 2 - The Convo!**](#december-2---the-convo)
  - [**December 3 - Meet and Greet!**](#december-3---meet-and-greet)
  - [**December 4 - Spoiled Or Not**](#december-4---spoiled-or-not)
  - [**December 5 - The Grand Master**](#december-5---the-grand-master)
  - [**December 6 - The Task Master**](#december-6---the-task-master)
  - [**December 7 - Temperature Screening**](#december-7---temperature-screening)
  - [**December 8 - Movie Night**](#december-8---movie-night)
  - [**December 9 - Isle of Dogs**](#december-9---isle-of-dogs)
  - [**December 10 - Restore IP Addresses**](#december-10---restore-ip-addresses)
  - [**December 11 - JSQL**](#december-11---jsql)
  - [**December 12 - Recruitment Drive**](#december-12---recruitment-drive)
  - [**December 13 - Check Your Spelling Sara!**](#december-13---check-your-spelling-sara)
  - [**December 14 - Puddles and Potholes**](#december-14---puddles-and-potholes)
  - [**December 15 - Help Max shop!**](#december-15---help-max-shop)
  - [**December 16 - Max's Party**](#december-16---maxs-party)
  - [**FAQ**](#faq)
  - [**Maintainers**](#maintainers)


## Algorithms

 ### December 1 - Sherlock's Quest
 
   #### Problem Statement
   - It's the final quest of Sherlock Holmes. The Moriarty wants Sherlock dead and is hiding behind a door on the same floor. To make sure he gets killed, Moriarty has filled all the rooms except the one he is in with poisonous gas.
   - The door number behind which he is hiding is designed in such a way that the sum of the left half and right half of the square of the number is equal to the number and is also a multiple of 3. 
   
   <p align="center"><img src="https://i.imgur.com/pIc2I8j.gif" height=250/></p>
   
   #### Sample Input/Output
   ```
    Room: 45
    Status: Safe
   ```
   ```
    Room: 36
    Status: Not Safe
   ```
   #### Explaination
   ```
    45 is a multiple of 3
    45^2 = 2025
    20 + 25 = 45
   ```   
   
----
  
### December 2 - The Convo!
  
  #### Problem Statement
  - Two friends were talking over the phone. They suddenly started to play a puzzle using the keypad.
  - The keypad contains digits from 2-9 inclusive. Develop a small algorithm to return all the possible letter combinations that the number could represent.  
    <p align="center"><img src="https://i.imgur.com/O31uZDd.jpg" /></p>
  
  #### Note
  - Only 2 character combinations are allowed.
  - First you should display the character corresponding to the first number and then display the character corresponding to the second number.
  
  #### Sample Input/Output
  ```
  Input: 32
  Output: ["da","db","dc","ea","eb","ec","fa","fb","fc"]
  ```

  #### Resources
  - [Backtracking](https://www.geeksforgeeks.org/backtracking-algorithms/)

---  

### December 3 - Meet and Greet!
  
  #### Problem Statement
  - Sundar is an employee at Google. He comes to office at `9:00` and leaves office at `17:00`.
  - One day he got a sudden message from a employee to schedule a metting for 1 hour. He, Can choose any time between his working hours. But, Sundar is a busy employee already had several meetings on that day.
  - Develop an algorithm to finds an interval time which is greater than meeting time (i.e) 1 hour. So, Sundar can attend his meeting accordingly.
  
  #### Sample Input/Output
  ```
  Input: ["0930", "1100"],["1200","1330"],["1530","1630"]
  Output: ["1100","1200"],["1330","1530"]
  ```
  
  #### Explanation
  - He comes to office by `9:00` the first meeting starts at `9:30` so he can't assign a meeting.
  - The first meeting overs at `10:00` and the next meeting starts at `12:00`. Now, He has 1 hour gap. So, he can assign a meeting in between that.
  - Again he has interval of 2 hour between `13:30` to `15:30` so he can assign a meeting at that time.
  
  #### Note
  - All times are calculated in 24 hours format.
  - The working hour and meeting time is constant
  
  #### Resources
  - [Python Lists](https://www.w3schools.com/python/python_lists.asp)
  - [C++ Vectors](https://www.geeksforgeeks.org/vector-in-cpp-stl/)
  
  ----
  
  ### December 4 - Spoiled Or Not

  #### Problem Statement
  - You are given with a list of manufacturing dates of each ice cream and also a list of days for the expiry of each ice cream from the date of manufacturing.
  - On a given date find the number of ice creams spoiled. You may assume that all the dates are in `DD/MM/YYYY` format.
  - If an Ice Cream expires on the given day then the ice cream is not spoiled. You may assume that all months have only `30` days.
     
  <p align="center"><img align="center" src="https://media.giphy.com/media/uUs14eCA2SBgs/giphy-downsized.gif" height=250/></p>
  
  #### Sample Input/Output
  ```
   Number of Ice Creams : 3	                
   Manufacture Dates : [10, 01, 2020],[13, 01, 2020],[20, 12, 2019]    
   Best Befor days : 20 13 20          
   Given Date : [28, 01, 2020] 	
   
   No of ice creams spoiled: 2
  ```

#### Explanation
```c
Expiry Date of Ice cream 1 = [10, 01, 2020] + 20 days = [30, 01, 2020]	    
Expiry Date of Ice cream 2 = [13, 01, 2020] + 13 days = [26, 01, 2020]	    
Expiry Date of Ice cream 3 = [20, 12, 2019] + 20 days = [10, 01, 2020]	    

On the given date ([28, 01, 2020]) ice creams 2 & 3 has expired.
```
  #### Optional Task
  - Try completing the problem in time complexity `O(n/4)`.

  #### Resources
  - [Python Lists](https://www.geeksforgeeks.org/python-list/)
  - [Multidimensional Arrays in c/cpp](https://www.geeksforgeeks.org/multidimensional-arrays-c-cpp/)
  - [Multidimensional Arrays in Java](https://www.programiz.com/java-programming/multidimensional-array)
  
  ----
  
### December 5 - The Grand Master

#### Problem Statement
- It was a dark and stormy night where an Oldman and his grandson were playing chess. The Oldman gave his grandson a problem, to check his knowledge and skills in chess.
- He stated that, It was a square chessboard of `A x B` size, the position of Knight `(C, D)` and position of a target `(E, F)` is given.
- Now the Grandson needs to find out the minimum steps a Knight will take to reach the target position. 
  
<p align="center"><img src="/src/assets/chess.png" /></p>
  
#### Sample Input/Output
```
Dimension of Board : 6 6
Position of Knight : 1 1
Target Position :  4 5 

Minimum Steps : 3
```

#### Explanation
- From the starting position of the Knight `(1,1)`. The Knight can move to either `(3,2)` or `(2,3)`. We choose `(3,2)`.
- From `(3,2)` the Knight can move to `(5,1)`, `(1,3)`, `(2,4)`, `(4,4)`, `(5,3)`, `(1,1)`. We choose `(5,3)`.
- From `(5,3)` the Knight moves to `(4,5)`.
- The Minimum steps required is `3`.

#### Resources
- [How does a knight move in a Chess Board?](http://www.chesscorner.com/tutorial/basic/knight/knight.htm)
- [Graphs](https://www.geeksforgeeks.org/graph-and-its-representations/)
- [BFS traversal in a graph](https://www.geeksforgeeks.org/breadth-first-search-or-bfs-for-a-graph/)

----
### December 6 - The Task Master

#### Problem Statement

  - Tim has lot of tasks to do but there are certain tasks which he must finish before doing others tasks and he wants to know the order in which he has to perform these tasks, for that he needs your help cause you are the task master.
  - Tim gives you a directed graph without any cycles, represented by a matrix where each index of the matrix represents a task. For example index `0` is task `A`, `1` is task `B`, `2` is task `C` and so on. 
  - Each task will have an array of tasks which can be performed only after performing the current task (the character represented by the index is the current task).
  - Implement a function `findCompletionOrderOfTasks(list*)` that finds the order of completion of the tasks.

<p align="center"><img src="/src/assets/dag-graph.png" /></p>

#### Sample Input/Output

```
findCompletionOrderOfTasks( [ ['B','C'], [], ['D'], [] ])
```
There are three possible solutions for the given input print any one of them.
```
A C D B
A C B D
A B C D
```

#### Explanation
  - The task `A` is not depended on any other tasks so it should be finished first.
  - Now there are two options either you can do task `B` or `C` as they depend only on task A which is already done.
  - If you finish task `B` after `A`, then you have to finish task `C` and then `D` because task `D` depends on `C`.
  - If you finish task `C` after `A`, then you have two options you can finish task `B` and then `D` or `D` and then `B`.

#### Resources
  - [Graph Editor](https://csacademy.com/app/graph_editor/)
  - [Topological Sort](https://www.geeksforgeeks.org/topological-sorting/)
  - [DFS-BFS](https://visualgo.net/en/dfsbfs)

----
 ### December 7 - Temperature Screening
 
   #### Problem Statement
   - Due to strict quarantine, the Railways have included a queue to check the temperature of the passengers before boarding the train. 
   - It takes 2 minutes for a ticket to be generated in ticket counter `A`, while it takes only 1 minute for a ticket to be generated in ticket counter `B`. 
   - The queue for temperature check up is right next to ticket counter `B`, where the passengers from both the queues have to wait for their turn.  Develop a small algorithm that specifies the position of the passengers in the temperature check up queue.

   
   #### Sample Input/Output
   ```
    Counter A: Aditi  Gautham  Ravi  Shreya
    Counter B: Karthik  Neha  Suman  Prakash
   ```
   ```
   Temperature Screening: Karthik  Neha  Aditi  Suman  Prakash  Gautham  Ravi  Shreya
   ```
   
   #### Explanation
   - Since counter B is closer to the temperature screening queue, only after 2 people from counter B move to that queue, one person from counter A joins them.
    
   #### Resources
   - [Queues using Arrays](https://www.geeksforgeeks.org/queue-set-1introduction-and-array-implementation/)
   - [Queues using Linked List](https://www.geeksforgeeks.org/queue-linked-list-implementation/?ref=rp)
----

### December 8 - Movie Night

#### Problem Statement
- A theatre has `N x M` seats, some of them are not in usable condition. Due to the pandemic, social distancing needs to be maintained, restricting only one person per row and column.
- How can you maximise the tickets sold for this theatre?  
- Represent Usable condition as `U`, Non-usable condition as `N`.

<p align="center"><img src="https://i.imgur.com/GckVAA4.gif" height=250/></p>
  
#### Sample Input/Output

```
Input : 2
        3 3
        UUU
        UUU
        UUU
        
Output : 3
```
```
Input : 3 3
        UUU
        UNN
        UNN
        
Output: 2
```

#### Explanation
- **Case 1**: People can sit on seats `(1,1)` `(2,2)` and `(3,3)`
- **Case 2**: People can sit on seats `(1,2)` and `(2,1)`

#### Resources
- [Maximum Flow](https://www.geeksforgeeks.org/max-flow-problem-introduction/)

----

### December 9 - Isle of Dogs

#### Problem Statement
- An outbreak of dog flu has spread through the city of Megasaki, Japan, and Mayor Kobayashi has demanded all dogs to be sent to Trash Islands. A young boy named Atari sets out to find his lost dog in the Trash Islands. But first, Atari needs help knowing how many islands are there to refuel his makeshift motorboat. Given an `M x N` 2D grid map of `*` (**land**) and `_` (**water**), **return the number of islands**.
- An island is always surrounded by water and is formed by connecting adjacent lands horizontally or vertically. You may assume all four edges of the grid are all surrounded by water.

<p align="center"><img src="https://i.imgur.com/p94noNt.gif" height=250/></p>
  
#### Sample Input/Output

##### Example 1:
```
Input: grid = [
  ["*","*","*","*","_"],
  ["*","*","_","*","_"],
  ["*","*","_","_","_"],
  ["_","_","_","_","_"]
]
Output: 1
```
##### Example 2:
```
Input: grid = [
  ["*","*","_","_","_"],
  ["*","*","_","_","_"],
  ["_","_","*","_","_"],
  ["_","_","_","*","*"]
]
Output: 3
``` 
 
<details>
    <summary>
        <strong>Resources (Spoiler)</strong>
    </summary>
    <ul>
        <li><a href="https://en.wikipedia.org/wiki/Adjacency_matrix">Adjacency Matrix</a></li>
        <li><a href="https://www.geeksforgeeks.org/implementation-of-bfs-using-adjacency-matrix/">Implementation of BFS using adjacency matrix</a></li>
        <li><a href="https://www.geeksforgeeks.org/implementation-of-dfs-using-adjacency-matrix/">Implementation of DFS using adjacency matrix</a></li>
    </ul>
</details>

---

### December 10 - Restore IP Addresses
#### Problem Statement
- It's midnight, Gilfoyle received a call from Dinesh that he lost Pied Piper's entire network table after trying to "download RAM from the Internet". All Dinesh gives Gilfoyle is a string `corrupted_log` containing only digits, help Gilfoyle return all possible valid IPv4 addresses that can be obtained from `corrupted_log`. They can be returned in any order.
- A valid IPv4 address must be in the form of **`xxx.xxx.xxx.xxx`**, where `xxx` is a number from 0-255 and cannot have leading zeros. For example, `0.2.1.132` and `192.168.1.1` are valid IPv4 addresses and `1.101.255.132`, `192.168.4.312` and `192.168@1.1` are invalid IPv4 addresses. 

<p align="center"><img src="https://i.imgur.com/jfzI7T2.gif" height=250/></p>
  
#### Sample Input/Output

##### Example 1
```
Input: corrupted_log = "25525511135"
Output: ["255.255.11.135","255.255.111.35"]
```

##### Example 2
```
Input: corrupted_log = "1111"
Output: ["1.1.1.1"]
```

##### Example 3
```
Input: corrupted_log = "0000"
Output: ["0.0.0.0"]
```

##### Example 4
```
Input: corrupted_log = "010010"
Output: ["0.10.0.10","0.100.1.0"]
```

##### Example 5
```
Input: corrupted_log = "101023"
Output: ["1.0.10.23","1.0.102.3","10.1.0.23","10.10.2.3","101.0.2.3"]
```

---

### December 11 - JSQL

#### Problem Statement
-	Given a JSON file with table information, return the SQL statement to create the table and insert all the records into the table.
- - You need not worry about key constraints.

#### Sample Input/Output
```json
  Input:
  {
    "table name": "my_table",
          "headers": {
      "1": {
        "column name": "id",
        "data type": "integer"
      },
      "2": {
        "column name": "name",
        "data type": "varchar(30)"
      }, 
    },
    "records": {   
      "1": [1, "Josh"],
      "2": [2, "Mike"],
      "3": [3, "Tom"]
    }
  }
```
```sql
  Output:
    create table my_table (id integer, name varchar(30));
    insert into my_table values (1, "Josh");
    insert into my_table values (2, "Mike");
    insert into my_table values (3, "Tom"); 
```

#### Explanation
- From the JSON file, we need to create a table `my_table` with 2 columns `id', and `age`.

> <a href="src/assets/dec 11 sample input.json"> Click here for more sample input</a>

#### Resources
- [SQL basics](https://www.tutorialspoint.com/sql/index.htm)
- [JSON overview & parsing JSON in various languaes](https://www.json.org/json-en.html)

---
### December 12 - Recruitment Drive

#### Problem Statement
- Given a file of candidates selection based on GPA and work experience predict whether the new candidate will be selected or not
- The file will have the following values
GPA : 0-5
Work experience : Number in years
Selection Status : 0-not selected
                   1-selected
- Prediction calculation (where X<sub>1</sub> is GPA and X<sub>2</sub> is work experience): 
<p align="center"><a href="https://www.codecogs.com/eqnedit.php?latex=\large&space;\frac{1}{1&space;&plus;&space;e^{-(b_{0}&space;&plus;&space;b_{1}x_{1}&space;&plus;&space;b_{2}x_{2})}}" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\large&space;\frac{1}{1&space;&plus;&space;e^{-(b_{0}&space;&plus;&space;b_{1}x_{1}&space;&plus;&space;b_{2}x_{2})}}" title="\large \frac{1}{1 + e^{-(b_{0} + b_{1}x_{1} + b_{2}x_{2})}}" /></a></p>

- For each test case (Stochastic gradient) b<sub>0</sub>,b<sub>1</sub>,b<sub>2</sub> are initially zero and is updated using: 

<p align="center"><a href="https://www.codecogs.com/eqnedit.php?latex=\large&space;b&space;=&space;b&space;&plus;&space;0.3&space;\times&space;(y&space;-&space;prediction)&space;\times&space;prediction&space;\times&space;(1&space;-&space;prediction)&space;\times&space;x" target="_blank"><img src="https://latex.codecogs.com/svg.latex?\large&space;b&space;=&space;b&space;&plus;&space;0.3&space;\times&space;(y&space;-&space;prediction)&space;\times&space;prediction&space;\times&space;(1&space;-&space;prediction)&space;\times&space;x" title="\large b = b + 0.3 \times (y - prediction) \times prediction \times (1 - prediction) \times x" /></a></p>
- Output whether the candidate will be selected or not?

#### Input Format
- The first line contains the address of the csv file. The csv file can be fetched from [here](src/assets/RECRUITMENT%20DRIVE%20-%20Sheet1.csv)
- The second line consists of two values gpa and work_experience

#### Output Format
- Print 'Selected' or 'Not selected' based on the prediction

#### Sample Input/Output
```csv
gpa,work_experience,selection_status
4,3,1
3.9,4,1
3.3,3,0
3.7,5,1
3.9,4,0
3.7,6,1
2.3,1,0
3.3,4,1
3.3,5,1
1.7,1,0
```
```
Input: 3.7 6
Output: Selected
```

#### Resources
- [Logistic Regression ML](https://machinelearningmastery.com/logistic-regression-tutorial-for-machine-learning/)

---
### December 13 - Check Your Spelling Sara!
  
  #### Problem Statement
  - Sara was writing an essay on pollution due to urbanization. Due to her poor writing skills she made a lot of errors in her essay.
  - One character in the string is incorrectly replaced by another one. Example: She enters Equalety instead Equality.  
  - Write a program to help her finish the essay by correcting the spelling mistakes.
  - The program should accept a list of correct words and the misspelt word as the input. Display the correct word as the output.
  
  <p align="center"><img src="https://i.imgur.com/gcZMbHu.gif" height=250/></p>
  
  #### Sample Input And Output
  ```
  Input:
  Correct Words: [Mango, Guitar, Automobile, Astonished, Unique]
  Misspelt word: Guiter
  
  Output:
  Guitar
  
  ```
  ```
  Input:
  Correct Words: [December, Of, Algorithms]
  Misspelt word: Algorythms
  
  Output:
  Algorithms
  
  ```

  #### Resources
  - [Applications of NLP](https://www.geeksforgeeks.org/top-7-applications-of-natural-language-processing/)

---  
### December 14 - Puddles and Potholes
  
 #### Problem Statement
- Due to improper road maintenance, some roads in ABC Nagar were broken and had potholes. The new delivery guy at Pizza House does not know about this situation. 
- To make things worse, the heavy rain last night has filled up these potholes and, there's no difference between a puddle of water and a pothole filled with water.
- Given a map where the potholes are marked as 0 and the road marked as 1, help the delivery guy deliver his pizzas safely on time by choosing the best route for him.
- The top left corner and the bottom right corner must be considered as Pizza House and the destination respectively.
 
 #### Sample Input And Output
   ```
    Enter the map details:
     1 0 0 0
     1 1 0 1
     0 1 0 0
     1 1 1 1
     
   ```
   ```
   Optimised Route:
     1 0 0 0
     1 1 0 0
     0 1 0 0
     0 1 1 1
     
   ```
 
 #### Explanation
   - The given map details can be interpreted as given:
     <p align="center"><img src="https://i.stack.imgur.com/mh9kV.png" height=250/></p>
  
  - The blocks for the optimised route are mentioned as 1’s while the remaining blocks are mentioned as 0’s.
 
 #### Resources
  - [Backtracking Introduction](https://www.geeksforgeeks.org/backtracking-introduction/)
  - [Backtracking Algorithms](https://www.geeksforgeeks.org/backtracking-algorithms/)

--- 

### December 15 - Help Max shop!

   #### Problem Statement
   - Max is deeply fond of fashion and he enters H&M in search of shirts and trousers.
   - The shirts and trousers are arranged in a single line (in disorderly fashion). Max wants to pick maxiumum number of continuous garments such that number of shirts and trousers are equal.
   - Can you help Max to find maximum number of garments he can pick given string gives arrangements of garments, `s` denotes shirts and `t` denotes trousers? Return a single line denoting maximum number of garments Max can pick.
   
   <p align="center"><img src="https://i.imgur.com/0KTYTYg.gif" height=250/></p> 

#### Sample Input And Output
   ```
   ststt
   4
   ```
   ```
   tsssst
   2
   ```
   ```  
   tstts
   4
   ```
   
   #### Explanation
   - He can pick from index 0 to 3 (assuming indexing starts from 0)
   - He can pick from index 0 to 1 or from 4 to 5 (assuming indexing starts from 0)
   - He can pick from index 1 to 4 (assuming indexing starts from 0)
   
   #### Resources
   - [Hashing](https://www.geeksforgeeks.org/hashing-data-structure/)
   
---

### December 16 - Max's Party
  
  #### Problem Statement
  - The neighbourhood of greenwood want to throw an appreciation party for their beloved mailman max. They want to get word around, but dont want to spoil the suprise for max. So they decide to encrypt their letter.
  - They decide to use ROT encryption technique, which is a simple character substitution based on a shift/rotation of `N` letters in an alphabet to circulate their messages. Help the neighbourhood encrypt a string `message` with a `Key` using ROT encryption technique as demonstrated below. 
  
  #### Sample Input And Output
  ```
  Message: "Hihow" 
  Key: LLRHR
  ```
  ```
  Encrypted Message: "nvGhg"
  ```
  #### Step-wise Explanation 
  1. `L`: `Hihow` -> `Ghgnv`
  2. `L`: `Ghgnv` -> `Fgfmu`
  3. `R`: `Fgfmu` -> `uFgfm`
  4. `H`: `uFgfm` -> `vGhgn`
  5. `R`: `vGhgn` -> `nvGhg`
  6. Therefore, the Derived Encrypted message for `Hihow` using the key `LLRHR` is `nvGhg`.
  7. Key size should be greater than one and contains only `L`, `H` and `R` where,
        - `L` stands for `-1`
        - `H` stands for `+1`
        - `R` stands for `Rotate`
  
  #### Resources
  - [ROT Cipher](https://en.wikipedia.org/wiki/ROT13/)

---  
   
## Maintainers

<table>
    <thead>
        <tr>
            <th><a href="https://github.com/bearlike">Krishnakanth</a></th>
            <th><a href="https://github.com/mahavisvanathan">Mahalakshumi</a></th>
            <th><a href="https://github.com/dhirajv2000">Dhiraj V</a></th>
            <th><a href="https://github.com/aravindr22">Aravind</a></th>
            <th><a href="https://github.com/Tarun200">Tarun</a></th>
            <th><a href="https://github.com/ASHIK11ab">Ashik</a></th>
            <th><a href="https://github.com/Harshini-rs">Harshini</a></th>
            <th><a href="https://github.com/Ganesh-Kumar6">Ganesh</a></th>
            <th><a href="https://github.com/Sandyy22">Sandhya</a></th>
            <th><a href="https://github.com/shrusri27">Shruti</a></th>
            <th><a href="https://github.com/NikhileshJr08">Nikhilesh</a></th>
        </tr>
    </thead>
    <tbody>
        <tr>
            <td align="center"><a href="https://github.com/bearlike"><img width="64" src="https://avatars1.githubusercontent.com/u/39209037" alt="f"></a></td>
            <td align="center"><a href="https://github.com/mahavisvanathan"><img width="64" src="https://avatars2.githubusercontent.com/u/40058339" alt="f"></a></td>
            <td align="center"><a href="https://github.com/dhirajv2000"><img width="64" src="https://avatars3.githubusercontent.com/u/54794049" alt="f"></a></td>
            <td align="center"><a href="https://github.com/aravindr22"><img width="64" src="https://avatars2.githubusercontent.com/u/55151962" alt="f"></a></td>
            <td align="center"><a href="https://github.com/Tarun200"><img width="64" src="https://avatars2.githubusercontent.com/u/55352559" alt="f"></a></td>
            <td align="center"><a href="https://github.com/ASHIK11ab"><img width="64" src="https://avatars2.githubusercontent.com/u/58099865" alt="f"></a></td>
            <td align="center"><a href="https://github.com/Harshini-rs"><img width="64" src="https://avatars0.githubusercontent.com/u/54198459" alt="f"></a></td>
            <td align="center"><a href="https://github.com/Ganesh-Kumar6"><img width="64" src="https://avatars2.githubusercontent.com/u/54319754" alt="f"></a></td>
            <td align="center"><a href="https://github.com/Sandyy22"><img width="64" src="https://avatars2.githubusercontent.com/u/74546521?s=64" alt="f"></a></td>
            <td align="center"><a href="https://github.com/shrusri27"><img width="64" src="https://avatars1.githubusercontent.com/u/49135092" alt="f"></a></td>
            <td align="center"><a href="https://github.com/shrusri27"><img width="64" src="https://avatars3.githubusercontent.com/u/63784914" alt="f"></a></td>
        </tr>
        <tr>
            <td align="center"> :hammer::construction::pencil: </td>
            <td align="center"> :hammer::construction: </td>
            <td align="center"> :warning::pencil: </td>
            <td align="center"> :pencil: </td>
            <td align="center"> :pencil: </td>
            <td align="center"> :pencil: </td>
            <td align="center"> :pencil: </td>
            <td align="center"> :pencil: </td>
            <td align="center"> :pencil: </td>
            <td align="center"> :pencil: </td>
            <td align="center"> :pencil: </td>
        </tr>
    </tbody>
</table>

----

FAQ
======

#### Who can join the Challenge?
Anyone who is passionate about coding and can dedicate a little time a day for the challenge for the next 31 days.

#### When should I submit the pull request?
You don't need to submit it everyday. Just submit it once you're done with all 31 algorithms.

#### What if I'm not able to code every day?
Not a problem. While coding every day is nice, we understand that other commitments might interfere with it. Plus its holiday season. So you don't have to solve one problem every day. Go at your own pace. One per day or 7 a week or even all 30 in a day.

#### What language should I use to code?
Anything! New to GoLang? Best way to practice it. Wanna find out what all this hype about Python is? Use it! Any and all languages are welcomed. Maybe you could try using a different language for every problem as a mini-challenge?

#### Fork? Pull request? What is all that? I don't know how to use GitHub!
If you are new to Git or GitHub, check out this [small tutorial from our team](https://github.com/ASS-G/Git-Training-Kit) and [GitHub](https://guides.github.com/activities/hello-world/)

#### Where are the rest of the problems?
Our code ninjas are hard at work preparing the rest of the problems. Don't worry, they'll be up soon.

#### How should I complete these programs?
We have a folder for each day of the month. Simply complete your code and move the file into that folder. Be sure to rename your file to the following format: `language_username` or `language_username_problemname`
Some examples:
`python3_exampleUser.py`
`c_exampleUser.c`
**Please do not modify any existing files in the repository.**

#### I forked the repository but some problems were added only after that. How do I access those problems?
Not to worry! Open your nearest terminal or command prompt and navigate over to your forked repository. Enter these commands:
```bash
git remote add upstream https://github.com/SVCE-ACM/A-December-of-Algorithms-2020.git
git fetch upstream
git merge upstream/main
```
If you're curious, the commands simply add a new remote called upstream that is linked to this repository. Then it 'fetches' or retrieves the contents of the repository and attempts to merge it with your progress.
Note that if you've already added the upstream repository, you don't need to re-add it in the future while fetching the newer questions.

#### I received a merge error. What do I do?
This shouldn't happen unless you modify an existing file in the repository. There's a lot of potential troubleshooting that might be needed, but the simplest thing to do is to make a copy of your code outside the repository and then clone it once again. Now repeat the steps from the answer above. Merge it and then add your code. Now proceed as usual. :)

#### I'm facing difficulties with/need help understanding a particular question.
Open up an [issue](https://github.com/SVCE-ACM/A-December-of-Algorithms-2020/issues) on this repository and we'll do our best to help you out.

###### [[Back to Top]](#----)

![wave](http://cdn.thekrishna.in/img/common/border.png)
