# Queue Implementation in C++

Welcome to the Queue implementation repository! This project demonstrates a simple queue data structure using C++. The queue supports basic operations such as enqueue, dequeue, and displaying the queue's contents.

## Features

- **Enqueue**: Add an element to the end of the queue.
- **Dequeue**: Remove an element from the front of the queue.
- **Display**: Show all elements currently in the queue.
- **Check Full**: Determine if the queue is full.
- **Check Empty**: Determine if the queue is empty.

## Implementation Details

The queue is implemented using an array with a fixed size (`MAX`), defined as 5. The program uses a `struct` to encapsulate the queue's properties and methods.

### Queue Structure
```cpp
struct Queue {
private:
    int front;
    int rear;
public:
    string* data;
    Queue();
    bool isPenuh();
    bool isKosong();
    void Enqueue(string mydata);
    string Dequeue();
    void Tampil();
    ~Queue();
};
```

### Key Methods

- **isPenuh()**: Checks if the queue is full.
- **isKosong()**: Checks if the queue is empty.
- **Enqueue(string mydata)**: Adds an element to the queue.
- **Dequeue()**: Removes an element from the queue and returns it.
- **Tampil()**: Displays the current elements in the queue.
- **Destructor**: Cleans up dynamically allocated memory.

### Example Usage
The `main` function demonstrates how to use the queue:
```cpp
int main(int argc, char const *argv[]) {
    Queue* q = new Queue();
    q->Enqueue("Riski1");
    q->Enqueue("Riski2");
    q->Tampil();
    cout << "\n" << q->Dequeue() << "\n";
    q->Tampil();
    q->Enqueue("Riski1");
    q->Enqueue("Riski3");
    q->Enqueue("Riski4");
    q->Tampil();
    return 0;
}
```

## Getting Started

### Prerequisites
- C++ compiler
- Basic knowledge of C++ programming

### Installation
1. Clone the repository:
    ```bash
    git clone https://github.com/whdhdyt21/Queue.git
    ```
2. Navigate to the project directory:
    ```bash
    cd Queue
    ```

### Compilation and Execution
1. Compile the program:
    ```bash
    g++ main.cpp -o queue
    ```
2. Run the compiled program:
    ```bash
    ./queue
    ```

## Contributing

Contributions are welcome! Please follow these steps to contribute:
1. Fork the repository.
2. Create a new branch (`git checkout -b feature-branch`).
3. Make your changes and commit them (`git commit -m 'Add new feature'`).
4. Push to the branch (`git push origin feature-branch`).
5. Create a new Pull Request.

## License

This project is licensed under the MIT License. See the `LICENSE` file for more details.

## Contact

For any questions or feedback, please open an issue or contact the project maintainer at wahidh776@gmail.com.

---

Thank you for exploring the Queue implementation in C++! We hope this project helps you understand the basics of queue data structures.
