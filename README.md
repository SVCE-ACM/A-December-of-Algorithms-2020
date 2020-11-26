<div align="left">
<h1>
    <img alt="header" src="/src/assets/Header.png" width="800"></img>
</h1>
Welcome to A December of Algorithms (2019). After the overwhelming response from last year, we present you with a new collection of algorithms to implement this December. Each Day, Each Algorithm ;) Finish them all to get prizes and certificate :)

**Send a pull request only after completing all 31 algorithms.**

**Please submit all PRs on or before January 10th 11:59 PM IST.**

## What Do I Do?
We have a small collection of algorithms, one for every day of the month. Scroll down to take a look at them. All you need to do is fork this repository, implement all 31  algorithms and send a pull request over to us. Check out our FAQ for more information.



## Index



## Algorithms

### **December 1 - Meet and Greet!**
  - **Problem**
    - Sundar is an employee at google he comes to office at 9.00hrs and leaves office at 17.00hrs.
    - One day he got a sudden message from a employee that you have to schedule a metting for 1hr. He, Can choose any time between his working hours. But, Sundar is a busy             employee already had several meetings on that day.
    - Develop an algorithm that finds an interval time which is greater than meeting time (i.e) 1hr. So, sundar can fix his meeting accordingly.
  - **Sample Input/Output**
      ```bash
      > Schedule_Time: [ ["0930", "1100"],["1200","1330"],["1530","1630"] ]
        [ ["1100","1200"],["1330","1530"] ]
      ```
  - **NOTE**
    - All times are calculated in 24hrs format.
    - The working hour and meeting time is constant
    - The Input time can be taken in the format of integer or string
  - **Resources**
    - [Python Lists](https://www.w3schools.com/python/python_lists.asp)
    - [C++ Vectors](https://www.geeksforgeeks.org/vector-in-cpp-stl/)
    

### **December 2 - The Convo**
  - **Problem**
    - Two friends were talking over the phone. They suddenly started to play a puzzle using the keypad.
    - The keypad contains digits from 2 - 9 inclusive. You have to write a program to return all the possible letter combinations that the number could represent. 
    - A mapping of digit to letters (just like on the telephone buttons) is given below. Note that 1 does not map to any letters. 
    -  ![keypad](/src/assets/keypad.jpg)
  - **Sample Input/Output**
      ```bash
      > ("32")
        ["da","db","dc","ea","eb","ec","fa","fb","fc"]
  - **Resources**
    

### **December 3- THE GRAND MASTER**
  - **Problem**
    - It was a dark and stormy night where an Oldman and his grandson were playing chess. The Oldman gave his grandson a problem, to check his knowledge and skills in chess.
    - He stated that, It was a square chessboard of A x B size, the position of Knight (C, D) and position of a target (E, F) is given. 
    - Now the Grandson needs to find out the minimum steps a Knight will take to reach the target position. 
    - ![chess](/src/assets/chess.png)
  - **Sample Input/Output**
      ```bash
      > A = 6, B = 6, C = 1, D = 1, E = 4, F = 5 
        3
      ```
  - **Resources**
   
    ### **December 4- The Final Quest**
  - **Problem**
    - It's the final quest of Sherlock Holmes. The murderer who wants Sherlock dead is hiding behind a door on the same floor. To make sure he gets killed, the evil man has           filled all the rooms except the one he is in with poisonous gas.
    - The door number behind which he is hiding is designed in such a way that the sum of the left half and right half of the square of the number is equal to the number and is       also a multiple of 3.
     - **Example**
      ```
      45 is a multiple of 3
      45^2 =2025
      20+25=45
      ```
      - Help Sherlock catch the murderer! The game is a foot!!!
  - **Sample Input/Output**
      ```bash
      > [1,10,45,55,18]	//room numbers
         45			//output the room number
      ```
  - **Resources**
    - [Arrays in C/C++](https://www.geeksforgeeks.org/arrays-in-c-cpp/)
    - [Arrays in Java](https://www.geeksforgeeks.org/arrays-in-java/)
    - [Arrays in Python](https://www.geeksforgeeks.org/python-arrays/)
    
    
### **December 5 - Spoiled Or Not**
  - **Problem**
    - Sam decides to eat ice creams, so he buys ice various creams of and stores it.
    - Sam has been busy for quite a few days and now wants to eat the ice creams. But he is afraid that the ice creams might have spoiled.
    - You are given with a list of manufacturing dates of each ice cream and a list of days until which the ice cream is safe to eat. Given a particular date, find the total           number of ice creams which are spoiled. 
    - You may assume that all the dates are in dd/mm/yyyy format.
    - If an ice cream expires on the given day then the ice cream is not spoiled.

  - **Sample Input/Output**
      ```bash
      mfg_dates = [ [10, 01, 2020], [13, 01, 2020], [20, 12, 2019] ]

      best_before = [ 12, 20, 15]

      given_date = [ 22, 01, 2020]

>> spoiledOrNot( mfg_dates, best_before, given_date )
>> No of ice creams spoiled:  1
      ```
  - **Optional Task**
    - Create a Dynamic Programming solution to reduce the time complexity of your algorithm (if you used a brute-force approach before).
  - **Resources**
    - [Python Lists](https://www.geeksforgeeks.org/python-list/)
    - [Multidimensional Arrays in c/cpp](https://www.geeksforgeeks.org/multidimensional-arrays-c-cpp/)
    - [Multidimensional Arrays in Java](https://www.programiz.com/java-programming/multidimensional-array)
    
    
 ### **December 6 - The Task Master**
  - **Problem**
    - Tim has lot of tasks to do but there are certain tasks which he must finish before doing others tasks. He wants to know the order in which he has to perform these 
      tasks, for that he needs your help cause you are the task master.
    - You are given a directed graph (without any cycle, represented by adjacency list) of tasks where each task is represented using characters (from A to Z) and 
      incoming edge represents that the current task can be done only after doing the previous task.
    - Implement a function findCompletionOrderOfTasks(list) that finds the order of completion of the tasks.
    - Here each index of the list represents a character (which is the task name). For example index 0 is A, 1 is B, 2 is C and so on. Also each task will have an 
      array of tasks which can be performed only after performing the current task.
  - **Sample Input/Output**
      ```c
         findCompletionOrderOfTasks( [ ['B','C'], [], ['D'])
         
        There are three possible solutions for the given input
        A C D B
        A C B D
        A B C D

      ```
   - **Explanation**
    -The task A is not depended on any other tasks so it should be finished first. Then there are two options either you can do task B or C as they depend only on task A 
     which is already done.
    -If you finish task B after A, then you have to finish task C and then D because task D depends on C.
    - If you finish task C after A, then you have two options you can finish task B and then D or D and then B.
   - **Resources**
    - [Graph Editor](https://csacademy.com/app/graph_editor/)
    - [Topological Sort](https://www.geeksforgeeks.org/topological-sorting/)
    - [DFS-BFS](https://visualgo.net/en/dfsbfs)
    
 ### **December 7 - The Hospital**
  - **Problem**
    - Due to a server crash in a hospital, the digtal records of the patients were not accessible. But, all the patients records were stacked based on their patient ID in the         record room. 
    - To retrieve a patient's record, all the records above it must be taken first and after retrieval of the desired record, they must be stacked back in the same order.
      Write a program to implement this scenario using queues..
    - An array of structures consisting of patient_id,name and ailment must be defined and used for the queues.
      Insertion, search and delete operations must be done using queues only, i.e, the first element of the queue will act as the top element of a stack. 
  - **Sample Input/Output**
      ```c
      Enter N: 5
      Enter patient ID, name and ailment: 
      1 aaa asthma
      2 bbb allergy
      3 ccc flu
      4 ddd conjunctivitis
      5 eee diabetes

      Enter patient ID to be retrieved: 3
      3 ccc flu

      Existing Stack:
      1 aaa asthma
      2 bbb allergy
      4 ddd conjunctivitis
      5 eee diabetes
      ```
  - **Resources**
    - 
    
 ### **December 8 - Name TBD**
  - **Problem**
    - “I am not in danger, Skyler. I am the danger. A guy opens his door and gets shot, and you think that of me? No! I am the one who knocks!”
    - Skyler fears Walter and ponders escaping to Colorado. Walter wants to clean his lab as soon as possible and then go back home to his wife.
      In order clean his lab, he has to achieve cleaning level of lab as Y. The current cleaning level of the lab is X.
    - Note that, he cannot change a or b once he starts cleaning.He can perform any one of the following operations for one round of cleaning:
        -Replace X with X+a.
        -Replace X with X−b.
    - Find minimum number of rounds (possibly zero) to make lab clean.
  - **Input**
    - Input:
      First line will contain 'n', number of inputs(test cases). n testcases follow :
      Each test case contains two space separated integers X,Y.

  - **Output**
      For each test case, output an integer denoting minimum number of rounds to clean the lab.

  - **Sample Input/Output**
      ```bash
      >Input:2
             0 5
             4 -5
      > Output: 1
                2
      ```
  - **Explanation**
    - For the first testcase, you can convert X to Y by choosing a=5 and b=2.It will cost minimum of 1 cleaning round. You can select any other combination of a,b satisfying           above condition but will take minimum of 1 cleaning round in any case.
    - For the second testcase, you can convert X to Y by choosing a=1 and b=10. In first round they will replace X to X+a and then in second round replace to X−b. You can             perform only one operation in one round.
  - **Resources**
    - 
  ### **December 9 - Football Mania**
  - **Problem**
    - The UEFA Champions League is the most prestigious annual sports competition in the world. In the group stage of this competition, European football clubs are divided into       8 groups; there are four teams in each group. The teams in each group are ranked based on the matches they play against each other, according to the following rules:
    - Based on the results of matches, teams are awarded points. Each football match is played between a home team and an away team. If one of the teams scores more goals than         the other, this team gains 3 points and the other team gains 0 points. In case of a tie (if both teams score the same number of goals), each of those teams gains 1 point.
      The goal difference of a team is the number of goals it scored minus the number of goals it received, regardless if it scored/received them as the home team or as the away       team.
    - Between any two teams, the team with more points is ranked higher.
      If they have the same number of points (in case of a tie), the team with higher goal difference is ranked higher.
      Each team plays two matches against every other team in its group ― one match as the home team and one match as the away team. You are given the number of goals scored by       each team for all twelve matches in one group. Determine the leaders of this group ― the first and second top-ranked team. It is guaranteed that there are no ties for           of these places (for the given results of the matches).

  - **Input**
      ```
      The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
      For each test case, 12 lines follow. Each of these lines describes the result of one match in the format HomeTeamName HomeTeamGoals vs. AwayTeamGoals AwayTeamName, where         HomeTeamName and AwayTeamName are strings and HomeTeamGoals and AwayTeamGoals are integers denoting the number of goals scored by the respective teams in this match.

      
      ```
    - **Output**
      ```
      For each scenario, print a single line containing two space-separated strings ― the name of the top-ranked team and the name of the second top-ranked team.
      ```
    - **Sample Input/Output**
      ```
      1
      fcbarca 8 vs. 2 arsenal
      lyon 1 vs. 2 fcbarca
      manutd 0 vs. 0 lyon
      manutd 5 vs. 1 arsenal
      fcbarca 3 vs. 1 manutd
      arsenal 6 vs. 0 lyon
      arsenal 0 vs. 0 fcbarca
      fcbarca 4 vs. 2 lyon
      arsenal 2 vs. 2 manutd
      lyon 0 vs. 3 manutd
      lyon 1 vs. 0 arsenal
      manutd 0 vs. 1 fcbarca

      fcbarca manutd

      ```
    -**Constraints**
     - the length of the name of each team does not exceed 10
       the name of each team contains only lowercase English letters
       0≤ number of goals scored by each team ≤10

   - **Resources**
     - 
    
    

## Maintainers
- [bearlike](https://github.com/K-Kraken)
- [mahavisvanathan](https://github.com/mahavisvanathan)
- [dhirajv2000](https://github.com/dhirajv2000)




FAQ:
======
  #### Who can join the Challenge?
  Anyone who is passionate about coding and can dedicate a little time a day for the challenge for the next 31 days.

  #### When should I submit the pull request?
  You don't need to submit it everyday. Just submit it once you're done with all 31 algorithms.

  #### What if I'm not able to code every day?
  Not a problem. While coding every day is nice, we understand that other commitments might interfere with it. Plus its holiday season. So you don't have to solve one problem every day. Go at your own pace. One per day or 7 a week or even all 30 in a day.

  #### What language should I use to code?
  Anything! New to C? Best way to practice it. Wanna find out what all this hype about Python is? Use it! Any and all languages are welcomed. Maybe you could try using a different language for every problem as a mini-challenge?

  #### Fork? Pull request? What is all that? I don't know how to use GitHub!
  If you are new to Git or GitHub, check out this [small tutorial from our team](https://github.com/ASS-G/Git-Training-Kit) and [GitHub](https://guides.github.com/activities/hello-world/)

  #### Where are the rest of the problems?
  Our code ninjas are hard at work preparing the rest of the problems. Don't worry, they'll be up soon.

  #### How should I complete these programs?
  We have a folder for each day of the month. Simply complete your code and move the file into that folder. Be sure to rename your file to the following format: `language_username` or `language_username_problemname`
  Some examples:
  `python_exampleUser.py`
  `c_exampleUser.c`
  **Please do not modify any existing files in the repository.**

  #### I forked the repository but some problems were added only after that. How do I access those problems?
  Not to worry! Open your nearest terminal or command prompt and navigate over to your forked repository. Enter these commands:
  ```bash
  git remote add upstream https://github.com/SVCE-ACM/A-December-of-Algorithms-2019.git
  git fetch upstream
  git merge upstream/master
  ```
  If you're curious, the commands simply add a new remote called upstream that is linked to this repository. Then it 'fetches' or retrieves the contents of the repository and attempts to merge it with your progress.
  Note that if you've already added the upstream repository, you don't need to re-add it in the future while fetching the newer questions.

  #### I received a merge error. What do I do?
  This shouldn't happen unless you modify an existing file in the repository. There's a lot of potential troubleshooting that might be needed, but the simplest thing to do is to make a copy of your code outside the repository and then clone it once again. Now repeat the steps from the answer above. Merge it and then add your code. Now proceed as usual. :)

  #### I'm facing difficulties with/need help understanding a particular question.
  Open up an [issue](https://github.com/SVCE-ACM/A-December-of-Algorithms-2019/issues) on this repository and we'll do our best to help you out.

###### [[Back to Top]](#----)

![wave](http://cdn.thekrishna.in/img/common/border.png)
