#pragma once


class interface
{
    public:
    virtual void foo() = 0;
    virtual ~interface(){
        
    }
};


class baseClass : public interface
{
    public:
        virtual ~baseClass() {}
        virtual void foo() override  {
            std::cout<<"foo"<<std::endl;
        }
};

class anotherClass : public baseClass
{
    public:
    virtual ~anotherClass()
    {
         std::cout <<"anotherClass destroyed " << std::endl;
    }
    virtual void foo() override {
        std::cout <<"anotherClass" << std::endl;
    }
};


