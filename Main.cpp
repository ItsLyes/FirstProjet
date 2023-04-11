#include "Main.hpp"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Task {
    string name;
    string due_date;
};

int main() {
    vector<Task> tasks;

    cout << "Ajouter une tâche : " << endl;
    Task new_task;
    cout << "Nom de la tâche : ";
    cin >> new_task.name;
    cout << "Date d'échéance (jj/mm/aaaa) : ";
    cin >> new_task.due_date;

    tasks.push_back(new_task);

    cout << "Tâche ajoutée avec succès !" << endl;

    return 0;
}
