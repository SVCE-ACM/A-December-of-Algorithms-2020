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
  - [**December 17 - Pokemon**](#december-17---pokemon)
  - [**December 18 - Is this a valid new user**](#december-18---is-this-a-valid-new-user)
  - [**December 19 - War on Wakanda**](#december-19---war-on-wakanda)
  - [**December 20 - Show up people!**](#december-20---show-up-people)
  - [**December 21 - Test of Accuracy**](#december-21---test-of-accuracy)
  - [**December 22 - Closest Servers**](#december-22---closest-servers)
  - [**December 23 - The Rise of the Knight**](#december-23---the-rise-of-the-knight) 
  - [**December 24 - Minify the damage**](#december-24---minify-the-damage) 
  - [**December 25 - Trapping Rain Water**](#december-25---trapping-rain-water)
  - [**December 26 - Lal's Jewels**](#december-26---lals-jewels)
  - [**December 27 - Covid in Godric's Hollow**](#december-27---covid-in-godric's-hollow)
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

### December 17 - Pokemon

#### Problem Statement
- A Pokemon battle between two teams (say `A` and `B`) is about to take place. Each teams consist of Pokemon from `1` to `n`. Each Pokemon has a power score.
- A Pokemon can win the battle only if its power score is strictly greater than his opponents power score. Coach of team A is yet to arrive.
- Team `A` needs your help. Come up with the maximum number of matches that team `A` can win if the fight the battle in a optimal manner if a Pokemon can only fight in one battle.

<p align="center"><img src="https://i.imgur.com/SH4TGKD.gif"></p>

#### Sample Input/Output
##### Example 1
```bash
  No of pokemons: 4
  Team A power score: [7, 10, 3, 5]
  Team B power score: [4, 12, 2, 6]
```
```
  Output: 3
```
##### Explanation
- Team `A` can win a maximum of `3` battles if they fight in the below order:
- `A1` fights with `B4`
- `A3` fights with `B3`
- `A4` fights with `B1`

##### Example 2
```bash
  No of pokemons: 5
  Team A power score: [4, 6, 7, 11, 8]
  Team B power score: [2, 5, 6, 13, 3]
```
```
  Output: 4
```

#### Resources
- [Basics of Greedy Algorithms](https://www.hackerearth.com/practice/algorithms/greedy/basics-of-greedy-algorithms/tutorial/)
- [Approach of Greedy Algorithms](https://www.guru99.com/greedy-algorithm.html)

---

### December 18 - Is this a valid new user?

#### Problem Statement
- During a hackathon, your friend Shyam is trying to add a user authentication feature.
- He is asking you to implement an algorithm to validate and check the availability for a given username.
- The rules for username validation are
  1. It can contain characters `a-z` or `A-Z`.
  2. It can contain numbers `0-9`.
  3. Special characters like period (`.`) underscore(`_`) or dash (`-`) is allowed, other special characters are not allowed.
  4. It should not contain any whitespace characters.
  5. The length of the username should not exceed 20.
- Fetch the data from the [fake users API](https://jsonplaceholder.typicode.com/users) to check whether the given username is available or not.

#### Sample Input/Output
##### Example 1
```
Input: Peter_Smith-24
Output: The username is valid and available.
```
##### Example 2
```
Input: Leopoldo_Corkery
Output: The username is valid but not available.
```
##### Example 3
```
Input: john $1-Samuel
Output: The username is not valid.
```

#### Resources
- [Fake users API](https://jsonplaceholder.typicode.com/users)
- [Regex Playground](https://regex101.com/)
- [Regex in C++](http://www.cplusplus.com/reference/regex/)
- [Regex in Java](https://www.javatpoint.com/java-regex)
- [Regex in JavaScript](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Guide/Regular_Expressions)
- [Regex in Python](https://www.tutorialspoint.com/python/python_reg_expressions.htm)

---
### December 19 - War on Wakanda

#### Problem Statement
- Thanos has declared war in Wakanda. The brave soldiers of Wakanda have been defending their country against attacks for a long time. There is a shortage of food amongst the citizens. The governor of Wakanda has ordered the army to drop food crates via helicopters.
- Each helipad in Wakanda is located at the nodes of a Generic Tree. Due to constant attacks from Thanos, the dispatched helicopter cannot stay over civilian sky for long or it will be shot down by the enemy. The pilot has decided to cover the entire Helipad Tree with the least number of landings. Each Helipad node can cover the node connected to it by one edge.
- If the number of landings exceed a certain number, the helicopter will be shot down by Thanos.
- Since it is a high pressure situation, you have to help the pilot figure out the minimum number of times he needs to land his helicopter in order to cover the entire Helipad Tree without being shot and complete its mission (if possible).

#### Input Format
- We need to input two things- Tree nodes and maximum allowed landings.
- The first line of input contains data of the nodes of the tree in level order form. The order is: data for root node, number of children to root node, data of each of child nodes and so on and so forth for each node. The data of the nodes of the tree is separated by space.  
- Since data of each node is irrelevant, it will be taken as 1, representing that the node exists.
- Second line of each test case will contain an integer K representing the maximum allowed landings.

#### Output Format
- Print the minimum number of landings, and if the mission was Successful/Unsuccesful

#### Sample Input/Output
```
Input:
1 3 1 1 1 2 1 1 0 0 0 0
3

Output:
2 Mission Successful
```
#### Explanation
For the given input the tree formed is given below, which can be covered with minimum 2 landings, which is less than the maximum allowed landings.

<p align="center"><img src="https://i.imgur.com/MDxBcf7.jpg" height=250/></p>

#### Resources
- [Generic Trees](https://www.geeksforgeeks.org/generic-treesn-array-trees/)


### December 20 - Show up people!

#### Problem Statement
- Given a positive integer `n`, return the number of all possible attendance records with length `n`, which will be regarded as acceptable The answer may be large, return it after `mod 10^9 + 7`.
- A student attendance record is a string that only contains the following three characters:
    - `A` : Absent.
    - `L` : Late.
    - `P` : Present.
- A record is regarded as acceptable if it doesn't contain more than one `A` (absent) or more than two continuous `L` (late).

#### Sample Input/Output

```bash
Input: n = 2
Output: 8
```

#### Explanation
- There are 8 records with length 2 will be regarded as acceptable:
- `PP` , `AP`, `PA`, `LP`, `PL`, `AL`, `LA`, `LL`
- Only `AA` won't be regarded as acceptable owing to more than one absent times. 

#### Resources (Spoilers)
- [Dynamic Programming](https://www.geeksforgeeks.org/dynamic-programming/)


---

### December 21 - Test of Accuracy
  
 #### Problem Statement
- For the final test of accuracy in a shooting range, the players have to hit maximum number of targets using a single bullet. 
- The targets are placed at random positions with varying lengths. 
- The input consists of the left most coordinate `(X,Y)` of the target and the length `L` of the target. 
- Find the maximum number of targets that can be shot by the player from (0,0).

<p align="center"><img src="https://i.imgur.com/LeRRoFv.gif" height=250/></p>

 #### Sample Input And Output
   ```
Enter the no. of targets: 5
30 10 10
10 20 20
20 50 30
40 20 10
20 30 10
   ```

   ```
   Targets shot in a single bullet: 3     
   ```
 
 #### Explanation
   - There is a way to shoot in such a way that it hits target number 2,3 and 5, hitting a maximum of 3 targets. 

     <p align="center"><img src="https://i.postimg.cc/Pf216wgv/scatter-plot.jpg" height=250/></p>
  

 #### Resources
 - [Line Sweep Introduction](https://www.topcoder.com/community/competitive-programming/tutorials/line-sweep-algorithms/)
 - [Line Sweep Algorithms]( https://www.geeksforgeeks.org/given-a-set-of-line-segments-find-if-any-two-segments-intersect/)

---

### December 22 - Closest Servers
#### Problem Statement
- George's company is working on a contract with a leading Cloud Service provider. They have to choose `k` locations for setting up cloud servers from `n` cities.
- The locations should be chosen in such a way that the maximum distance of a city to a cloud server is minimum.

#### Sample I/O
```bash
  Input: distances = [
    [0, 4, 8,  5],
    [4, 0, 10, 7],
    [8, 10, 0, 9],
    [5, 7, 9,  0]
  ]
```
```bash
  Output: 0 2
```

#### Explanation
- `distances[i][j]` is the distance between city `i` and city `j`.
- The maximum distance of a city from a cloud server is minimized when the two servers are placed at cities `0` and `2` with the distance being `5` units.
- The distance of a city from a center is the distance between that city and its closest center.

---
### December 23 - The Rise of the Knight
#### Problem Statement
- The demons had captured the princess (`P`) and imprisoned her in the bottom-right corner of a dungeon. The dungeon consists of `M x N` rooms laid out in a 2D grid. Our valiant knight (`K`) was initially positioned in the top-left room and must fight his way through the dungeon to rescue the princess.
- The knight has an initial health point represented by a positive integer. He dies immediately if his health point drops to `0`.
- Some of the rooms are guarded by demons, so the knight loses health (**negative integers**) upon entering these rooms; other rooms are either empty (`0`s) or contain magic orbs that increase the knight's health (**positive integers**). To reach the princess as quickly as possible, the knight decides to move only rightward or downward in each step.
- Write a function to determine the knight's minimum initial health so that he can rescue the princess.
- Note that the knight's life has no upper bound, and any room can contain threats or power-ups, even the first room the knight enters and the bottom-right room where the princess is imprisoned.

     <p align="center"><img src="https://i.imgur.com/6C4rBVj.gif" height=250/></p>

#### Sample Input/Output
```bash
  Input:
	 -2(K)	-3	3
	 -5	-10	1
	 10	 30    -5(P)
```
```bash
  Output: 7
```

#### Explanation
- Input is the dungeon where `K` represents the Knight and `P` represents the Princess.
- Output `7` indicates that the initial health of the knight must be at least `7` if he follows the optimal path `RIGHT-> RIGHT -> DOWN -> DOWN`.

---

### December 24 - Minify the damage
#### Problem Statement
- You are in a game where you have to fight some enemies. You are given an array of integers where each index represents an enemy and the value at each index represents the damage per second that the enemy can cause.
- You have k number of rounds and you have to fight with equal number of enemies in each round such that 
  - There are no two enemies with equal damage per second present in the same round.
  - The sum of the difference between the maximum and minimum damage per second caused in each round is minimum.
- Return the minimum sum, or return `-1` if it is not possible. Note that the array length is divisible by `k`.

#### Sample Input/Output

##### Example 1:
```
Input: [1,2,1,4], k = 2
Output: 4
```

##### Explanation: 
- The optimal distribution of enemies is [1,2] and [1,4].
- The sum is (2-1) + (4-1) = 4.
- Note that [1,1] and [2,4] would result in a smaller sum, but in the first round there are 2 enemies with the same damage per second which is not allowed.

##### Example 2:
```
Input: [6,3,8,1,3,1,2,2], k = 4
Output: 6
```
#### Explanation: 
- The optimal distribution of enemies is [1,2], [2,3], [6,8], and [1,3].
- The sum  is (2-1) + (3-2) + (8-6) + (3-1) = 6.

##### Example 3:
```
Input: [5,3,3,6,3,3], k = 3
Output: -1
```
##### Explanation: 
- It is impossible to distribute the enemies for 3 rounds where no two enemies have equal damage per second in the same round.

---

### December 25 - Trapping Rain Water
#### Problem Statement
Given `n` non-negative integers representing an elevation map where the width of each bar is `1`, compute how much water it can trap after raining.

#### Sample Input/Output
##### Example 1:
![](https://i.imgur.com/stSuRte.jpg)
```
Input: height = [0,1,0,2,1,0,1,3,2,1,2,1]
Output: 6
```
**Explanation**: The above elevation map (black section) is represented by array `[0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1]`. In this case, 6 units of rain water (blue section) are being trapped.

##### Example 2:
```
Input: height = [4,2,0,3,2,5]
Output: 9
```

---

### December 26 - Lal's Jewels
#### Problem Statement
- Lal is a jwellery dealer who buys long chains of Diamonds, Rubies, and Emerlads. He cuts them into small chains and sells them for a profit.
- He gets very nice bonus if, the chain has a palindromic order of stones.
- The price is determined as follows:
	- A single diamond `D` costs `$500`
	- A single ruby `R` costs `$250`
	- A single emerald `E` costs `$100`
	- Price is multiplied `n` times, for palindromic chains, where `n` is the length of the chain.
- Given the whole chain, find the maximum profit lal can make, cutting out a palindromic chain.

<p align="center"><img src="https://i.imgur.com/rMLVif3.gif" height=250/></p>
  
### Sample Input/Output

### Example 1
```
Chain: "RDEREDRRRD"
Output: $7250
```
##### Explanation: 
- The longest palindromic chain is "DERED", the prices are added and 5 is multiplied as a bonus.

### Example 2
```
Chain: "DERRREDERREDEREDR"
Output: $24,000
```
##### Explanation: 
- The longest palindromic chain is "REDERREDER", the prices are added and 10 is multiplied as a bonus.

<details>
    <summary>
        <strong>Resources (Spoiler)</strong>
    </summary>
    <ul>
        <li><a href="https://www.geeksforgeeks.org/manachers-algorithm-linear-time-longest-palindromic-substring-part-1/">Manacher’s Algorithm</a></li>
        <li><a href="https://cp-algorithms.com/string/manacher.html/">Implementation of Manacher's Algorithm</a></li>
    </ul>
</details>

---

### December 27 - Covid in Godric's Hollow
#### Problem Statement
- Three scientists in Godric's Hallow were experimenting the outbreak of Covid 19 virus in that area. They were interested to know whether there is a single source that Is spreading this virus or if there are multiple ones.
- You will be given some coordinates which represents the houses in that area and each of the coordinates will have a status Y and N. Y represents that the house Is infected. N represents that the house is not infected.
- Your task is to detect whether we have a single source or multiple sources causing this virus. You will find that the coordinates of the inflected house forms a circle. Basically if a circle is formed using  sets of  coordinates having status Y then there is a single source of virus. If a coordinate having status Y goes out of the circle formed by using the Y status coordinates then there are multiple sources of this virus. 
- Write a program to solve the above problem and print whether we need alert status to report whether we have multiple sources of this virus.

     <p align="center"><img src="https://imgur.com/UMbx1Zy" height=250/></p>

#### Input Format
The first line of the input contains an integer n(1<=n<=100) that represents the number of houses. The next lines describes the coordinates of the houses and the infected status. First number is the x coordinate(-250<=x<=250). Second number is the y coordinate(-250<=y<=250). Third input is the infected status Y/N.

#### Output Format
If we have multiple sources of the virus print Yes alert status is needed otherwise print no alert status is not needed.

#### Sample Input/Output
```bash
  Input:
7
0  0   Y
1  0   Y
0  1   Y
4  4   N
4  -4   N
-4  4   N
-4  -4  N

```
```bash
  Output: 
  No alert status is not needed.
```

#### Resources
https://www.geeksforgeeks.org/geometric-algorithms/

---
## Maintainers

<table>
    <thead>
        <tr>
            <th><a href="https://github.com/bearlike">Krishnakanth</a></th>
            <th><a href="https://github.com/mahavisvanathan">Mahalakshumi</a></th>
            <th><a href="https://github.com/dhirajv2000">Dhiraj</a></th>
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
