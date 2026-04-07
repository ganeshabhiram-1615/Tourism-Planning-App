# 🌍 Tourism Planning App (C Project)

## 📌 Project Title

Tourism Planning App using Data Structures in C

## 👨‍💻 Team Members

* Ganesh Abhiram
* Sashank


## ❓ Problem Statement

Planning a trip manually can be confusing and time-consuming. Travelers often struggle to decide:

* Best destination based on season
* Attractions to visit
* Budget planning
* Food and accommodation choices

This project solves the problem by creating a **Tourism Planning App** that helps users:

* Store and manage travel destinations
* Get travel suggestions
* Plan trips efficiently with budget and itinerary


## 🧠 Data Structure Used

* **Linked List**
* Each node represents one destination

### Why Linked List?

* Dynamic memory allocation (no fixed size)
* Easy insertion and deletion
* Efficient for CRUD operations


## ⚙️ Algorithm Explanation

### 1. Create (Add Node)

* Allocate memory using `malloc`
* Input destination details
* Insert node at beginning of linked list

### 2. Read (Display)

* Traverse linked list from head
* Print details of each destination

### 3. Update

* Search destination by name
* Modify required fields

### 4. Delete

* Search node
* Adjust links
* Free memory using `free`

### 5. Search

* Traverse list
* Compare names using `strcmp`

### 6. Suggest Destination

* Take season input
* Display predefined suggestions


## 💻 Compilation Instructions

### Step 1: Save file

Save as:

tourism.c

### Step 2: Compile

```
gcc tourism.c -o tourism
```

### Step 3: Run

```
./tourism
```


## 🧾 Sample Output

====== TOURISM APP ======
1. Add Node
2. Delete Node
3. Update Node
4. Search
5. Display
6. Suggest Destination
7. Exit

Enter choice: 1

Enter Destination Name: Ooty
Best time to visit: Summer
Famous Attractions: Botanical Garden, Ooty Lake
Famous Food: Homemade chocolates
Minimum days: 3
Daily Plan: Day1-lake, Day2-hills
Travel: Bus or Train
Hotel: Budget hotels available
Budget: 5000

✅ Destination Added Successfully!


## ✨ Features

* CRUD Operations (Create, Read, Update, Delete)
* Season-based destination suggestions
* Budget planning
* Travel and hotel recommendations
* Food suggestions
* Daily itinerary planning


## 🚀 Future Enhancements

* File handling (save data permanently)
* Sorting destinations by budget
* GUI version
* Online API integration


## 📚 Conclusion

This project demonstrates the practical use of **data structures (linked list)** in solving a real-world problem. It improves understanding of:

* Dynamic memory allocation
* Modular programming
* CRUD operations
