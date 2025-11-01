#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Structure to store each task
struct Task {
    string description;
    bool completed;
};

// Class for To-Do List Management
class ToDoList {
private:
    vector<Task> tasks;

public:
    // Add a new task
    void addTask() {
        string taskDesc;
        cout << "Enter the task description: ";
        cin.ignore();
        getline(cin, taskDesc);

        Task newTask = {taskDesc, false};
        tasks.push_back(newTask);
        cout << "✅ Task added successfully!\n";
    }

    // View all tasks
    void viewTasks() {
        if (tasks.empty()) {
            cout << "No tasks in your to-do list.\n";
            return;
        }

        cout << "\n---------- Your To-Do List ----------\n";
        for (int i = 0; i < tasks.size(); i++) {
            cout << i + 1 << ". " << tasks[i].description 
                 << " [" << (tasks[i].completed ? "✔ Completed" : "⏳ Pending") << "]\n";
        }
    }

    // Mark task as completed
    void markCompleted() {
        if (tasks.empty()) {
            cout << "No tasks to mark.\n";
            return;
        }

        int index;
        cout << "Enter the task number to mark as completed: ";
        cin >> index;

        if (index < 1 || index > tasks.size()) {
            cout << "Invalid task number!\n";
            return;
        }

        tasks[index - 1].completed = true;
        cout << "✅ Task marked as completed!\n";
    }

    // Delete a task
    void deleteTask() {
        if (tasks.empty()) {
            cout << "No tasks to delete.\n";
            return;
        }

        int index;
        cout << "Enter the task number to delete: ";
        cin >> index;

        if (index < 1 || index > tasks.size()) {
            cout << "Invalid task number!\n";
            return;
        }

        tasks.erase(tasks.begin() + index - 1);
        cout << "🗑 Task deleted successfully!\n";
    }
};

// ----------------- Main Function -----------------
int main() {
    ToDoList todo;
    int choice;

    do {
        cout << "\n========= TO-DO LIST MANAGER =========\n";
        cout << "1. Add Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Mark Task as Completed\n";
        cout << "4. Delete Task\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: todo.addTask(); break;
            case 2: todo.viewTasks(); break;
            case 3: todo.markCompleted(); break;
            case 4: todo.deleteTask(); break;
            case 5: cout << "Exiting... Have a productive day! ✨\n"; break;
            default: cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 5);

    return 0;
}
