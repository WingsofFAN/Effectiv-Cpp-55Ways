#include<iostream>
#include<string>
#include<vector>

class IdCard
{

private:
    std::string name;
    std::vector<int> bill;
    
public:
    IdCard(const std::string name, std::vector<int> bill ):name(name),bill(bill){};
    ~IdCard(){};

    const std::vector<int>& get_bill() const {return bill;};
    const std::string& get_name() const {return name;};
    //const 函数供给 const类使用

    std::vector<int>& get_bill() {return bill;};
    std::string& get_name() {return name;};

    const int& operator[](std::size_t position) const
    {
        if(position < bill.size() && position >= 0)
        {
            return bill[position];
        }
        else
        {
            return -1;
        }
    }

    int& operator[](std::size_t position)         // now just calls const op[]
    {
        return
        const_cast<int&>(                           // cast away const on
                                                    // op[]'s return type;
            static_cast<const IdCard&>(*this)      // add const to *this's type;
            [position]                             // call const version of op[]
        );
    }  

    //简单来说就是将 非const数据转换为const，然后送入到const函数中去复用
};




int main()
{
    IdCard one("张三",{1,2,2,2,2});
    std::cout << one.get_name() << std::endl;

    for(int i = 0 ; i < one.get_bill().size();i++)
    {
        one[i] = i;        
    }
    for(auto& p : one.get_bill())
    {
        std::cout << p << std::endl;
    }

            
    const IdCard two("李四",{1,2,3,4,5});
    std::cout << two.get_name() << std::endl;
    for(auto p : two.get_bill())
    {
        std::cout << p << std::endl;
    }
        

    return 0;
}