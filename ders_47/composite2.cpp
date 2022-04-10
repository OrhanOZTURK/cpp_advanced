
#include <iostream>
#include <list>
#include <string>
#include <algorithm>

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
		//özellikle boş yada exception throw edilebilirdi.
	}

	virtual void remove(Component*)override
	{
		//özellikle boş yada exception throw edilebilirdi.
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
	Component* tree = new Composite;
	Component* branch1 = new Composite;
	Component* leaf_1 = new Leaf;
	Component* leaf_2 = new Leaf;
	Component* leaf_3 = new Leaf;
	branch1->add(leaf_1);
	branch1->add(leaf_2);
	Component* branch2 = new Composite;
	branch2->add(leaf_3);
	tree->add(branch1);
	tree->add(branch2);
	std::cout << "Client : Now I have got a composite tree:\n";
	ClientCode(tree);
	delete simple;
	std::cout << "\n\n";

}

