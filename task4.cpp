#include <iostream>
#include <map>
#include <string>
using namespace std;

map <string, string> to_do_list;

void add_task()
{
    string task;
    string status;
    bool allow=true;
    while (allow)
    {
        cout<<"Enter task or press q to quit"<<endl;
        getline(cin,task);
        if (task=="q")
        {
            allow=false;
        }
        else
        {
            cout<<"Enter status of each task"<<endl;
            getline(cin, status);
            to_do_list[task]=status;
        }
    }
}
void display_tasks()
{
    cout<<"\n Tasks and their status: "<<endl;
    for(const auto one_task_status_pair: to_do_list)
    {
        cout<<"Task: "<<one_task_status_pair.first<< " | Status: "<<one_task_status_pair.second<<endl;
    }
}
void update_task()
{
    string task;
    string status;
    cout<<"\n Enter task to update its status: ";
    getline(cin,task);
    auto task_status_pair=to_do_list.find(task);
    if (task_status_pair!=to_do_list.end())
    {
        cout<<"Enter new status: ";
        getline(cin,status);
        task_status_pair->second = status;
        cout<< "Task status updated successfully."<< endl;
    }
    else
    {
        cout<<"Task not found."<<endl;
    }
}
void remove_task()
{
    string task;
    cout<<" \n Enter which task to remove: ";
    getline(cin, task);
    auto task_status_pair=to_do_list.find(task);
    if (task_status_pair!=to_do_list.end())
    {
        to_do_list.erase(task_status_pair);
        cout<<"\n Task removed successfully"<<endl;
    }
    else
    {
        cout<<"Task not found"<<endl;
    }
}
int main()
{
    int choice;
    while (true)
    {
        cout<<"\n Enter your choice: \n 1. Add Tasks \n 2. Display Tasks \n 3. Update Task Status \n 4. Remove task \n 5. Quit " <<endl;
        cin>>choice;
        cin.ignore();
        switch (choice)
        {
        case 1:
            add_task();
            break;
        case 2:
            display_tasks();
            break;
        case 3:
            update_task();
            break;
        case 4:
            remove_task();
            break;
        case 5:
            return 0;
        default:
            cout<<"Invalid number."<<endl;
        }
    }

}

