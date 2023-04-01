#include <iostream>
#define MAX 5
using namespace std;

struct Queue
{
private:
    int front;
    int rear;
public:
    string* data;
    Queue()
    {
        front = -1;
        rear = -1;
        data = new string[MAX];
    }

    bool isPenuh()
    {
        if (front == 0 && rear == MAX - 1)
        {
            return true;
        }
        else
        {
            return false;
        }
        // return (front == 0 && rear == MAX - 1);
    }

    bool isKosong()
    {
        if (front == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
        // return (front == -1);
    }

    void Enqueue(string mydata)
    {
        if (isPenuh())
        {
            cout << "Antrian Penuh" << endl;
        }
        else
        {
            if (front == -1)
            {
                front = 0;
            }
            rear++;
            data[rear] = mydata;
            cout << "Data " << mydata << " masuk ke antrian" << endl;
        }
    }

    string Dequeue()
    {
        string temp;
        if(isKosong())
        {
            cout<<"tutup saja\n";
            exit(EXIT_FAILURE);
        }
        else
        {
            //ambil data paling depan
            temp = data[front];
            //kita cek apakah hanya ada 1 data
            if(front==rear)
            {
                front=-1;
                rear=-1;
            }
            //jika datanya lebih dari satu
            else
            {
                //geser dong
                for(int i;i<rear;i++)
                    data[i]=data[i+1];
                //isi data terakhir dengan ""
                data[rear] = " ";
                //geser rear ke data terakhir yang baru
                rear--;
            }
            return temp;
        }
    }

    void Tampil()
    {
        if (isKosong())
        {
            cout << "Antrian Kosong" << endl;
        }
        else
        {
            cout << "Data yang ada di antrian: ";
            for (int i = front; i <= rear; i++)
            {
                cout << data[i] << " -- ";
            }
            cout << endl;
        }
    }
    
    ~Queue()
    {
        delete[] data;
    }
};


int main(int argc, char const *argv[])
{
    Queue* q = new Queue();
    q->Enqueue("Riski1");
    q->Enqueue("Riski2");
    q->Tampil();
    cout<<"\n"<<q->Dequeue()<<"\n";
    q->Tampil();
    q->Enqueue("Riski1");
    q->Enqueue("Riski3");
    q->Enqueue("Riski4");
    q->Tampil();
    return 0;
}
