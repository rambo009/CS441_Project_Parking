#ifndef SINGLETON_H
#define SINGLETON_H

template<class Type>
class Singleton
{
public:
    static Type* instance();
    static void destroy();

protected:
    Singleton() {m_pInstance = static_cast<Type*>(this);}
    ~Singleton() {this->destroy();}

private:
    Singleton(Singleton const&) {}
    Singleton& operator=(Singleton const&) {}
    static Type* m_pInstance;
};

template<class Type>
Type* Singleton<Type>::m_pInstance = nullptr;

template<class Type>
Type* Singleton<Type>::instance()
{
    if(!m_pInstance) {
        Singleton<Type>::m_pInstance = new Type();
    }

    return m_pInstance;
}

template<class Type>
void Singleton<Type>::destroy()
{
    if(m_pInstance != nullptr) {
        delete Singleton<Type>::m_pInstance;
        Singleton<Type>::m_pInstance = 0;
    }
}

#endif // SINGLETON_H
