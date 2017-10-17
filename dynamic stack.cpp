#include<iostream>
using namespace std;

template <typename T>
class DynamicStack {
private:
    T *A;
    int top;
public:
    DynamicStack();
    ~DynamicStack();
    bool IsEmpty();
    bool Push (T a);
    bool Pop ();
    T GetTop ();
    int Size();
};

template <typename T>
void CopyArray (T *C, T *D, int Size) {
    for (int i = 0; i < Size; i++) {
        C[i] = D[i];
    }
}


template <typename T>
DynamicStack<T> :: DynamicStack () :
top(0) {  }

template <typename T>
DynamicStack<T> :: ~DynamicStack() {
    delete [] A;
}

template <typename T>
bool DynamicStack<T> :: IsEmpty() {
    if (top == 0) return true;
    else return false;
}

template <typename T>
bool DynamicStack<T> :: Push (T a) {
    if (top == 0) {
        top++;
        A = new T[top];
        A[top - 1] = a;
        return true;
    }
    else {
        T *B = new T[top];

        CopyArray(B, A, top);

        delete [] A;

        top++;
        A = new T[top];
        CopyArray(A, B, top - 1);
        A[top - 1] = a;
        return true;
    }
}

template <typename T>
bool DynamicStack<T> :: Pop () {
    if (IsEmpty()) return false;
    else {
        top--;
        T *B = new T[top];

        CopyArray(B, A, top);

        delete [] A;
        A = new T[top];
        CopyArray(A, B, top);
    }
}

template <typename T>
T DynamicStack<T> :: GetTop () {
    return A[top - 1];
}

template <typename T>
int DynamicStack<T> :: Size() {
    return top;
}
