#include "Main.hpp"
#include <iostream>
#include <string>
#include <vector>

struct Task {
    std::string name;
    std::string due_date;
};

int main() {
    std::vector<Task> tasks;

    std::cout << "Ajouter une tâche : " << std::endl;
    Task new_task;
    std::cout << "Nom de la tâche : ";
    std::cin >> new_task.name;
    std::cout << "Date d'échéance (jj/mm/aaaa) : ";
    std::cin >> new_task.due_date;

    tasks.push_back(new_task);

    std::cout << "Tâche ajoutée avec succès !" << std::endl;

    return 0;
}
