template<typename T>

class RingBuffer {
private:
    int capacity;
    int size;
    int start;
    T* buffer;

public:

    RingBuffer(int capacity);

    ~RingBuffer();

    int getSize() const;

    int getCapacity() const;

    bool isEmpty() const;

    bool isFull() const;

    void clear();

    void push_back(const T& value);

    void pop_back();

    void push_front(const T& value);

    void pop_front();

    void insert(const T& value, int index);

    void erase(int index);

    T& operator[](int index);

    T& front();

    T& back();

    void resize(int newCapacity);
};
