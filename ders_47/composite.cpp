#include <iostream>
#include <list>
#include <string>

class Component
{
protected:
	Component* m_parent;
public:
	virtual ~Component() = default;
  
	void set_parent(Component* parent)
	{
		m_parent = parent;
	}
	Component* get_parent()const
	{
		return m_parent;
	}
  
	virtual void add(Component*) = 0;
	virtual void remove(Component*) = 0;

	virtual bool is_composite()const
	{
		return false;
	}
  
	virtual std::string operation()const = 0;
};

class Leaf : public Component
{
public:
	virtual void add(Component*)override
	{
		
	}

	virtual void remove(Component*)override
	{
	
	}
  
	std::string operation()const override
	{
		return "Leaf";
	}
};

class Composite : public Component
{
protected:
	std::list<Component*> m_children_list;
public:
	void add(Component* pcom)override
	{
		m_children_list.push_back(pcom);
		pcom->set_parent(this);
	}
  
	void remove(Component* pcomp)override
	{
		m_children_list.remove(pcomp);
		pcomp->set_parent(nullptr);
	}
  
	bool is_composite()const override
	{
		return true;
	}
  
	std::string operation()const override
	{
		std::string result;
		for (const Component* c : m_children_list)
		{
			if (c == m_children_list.back())
			{
				result += c->operation();
			}
			else
			{
				result += c->operation() + "+";
			}
		}
		return "Branch(" + result + ")";
	}
};

void ClientCode(Component* pcomp)
{
	//...
	std::cout << "RESULT: " << pcomp->operation();
	//...
}

void ClientCode2(Component* component1, Component* component2)
{
	//..
	if (component1->is_composite())
	{
		component1->add(component2);
	}
	std::cout << "RESULT: " << component1->operation();
	//..
}

int main()
{
	
	Component* simple = new Leaf;
	std::cout << "Client : I have got a simple component\n";
	ClientCode(simple);
	std::cout << "\n\n";
	delete simple;
}
