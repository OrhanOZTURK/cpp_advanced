#include <string>
#include <iostream>

class Command {
public:
	virtual ~Command() { }
	virtual void execute()const = 0;
};
class SimpleCommand : public Command
{
private:

public:
	explicit SimpleCommand(std::string pay_load) : pay_load_(pay_load) { }
	void execute() const override
	{
		std::cout << "SimpleCommand: See, I can do simple things like printing (" << pay_load_ << ")\n";
	}
private:
	std::string pay_load_;
};

class Receiver
{
public:
	void DoSomething(const std::string& a)
	{
		std::cout << "Receiver: Working on (" << a << ".)\n";
	}

	void DoSomethingElse(const std::string& b)
	{
		std::cout << "Receiver: Also Working on (" << b << ".)\n";
	}
};

class ComplexCommand : public Command {
private:
	Receiver* receiver_;
	std::string a_;
	std::string b_;
public:
	ComplexCommand(Receiver* receiver, std::string a, std::string b) : receiver_(receiver), a_(a), b_(b)
	{
	}
	void execute()const override
	{
		std::cout << "ComplexCommand: Complex stuff should be done by a receiver object.\n";
		receiver_->DoSomething(a_);
		receiver_->DoSomethingElse(b_);
	}
};

class Invoker {
private:
	Command* on_start_;
	Command* on_finish_;
public:
	~Invoker()
	{
		delete on_start_;
		delete on_finish_;
	}
	void SetOnStart(Command* command)
	{
		on_start_ = command;
	}
	void SetOnFinish(Command* command)
	{
		on_finish_ = command;
	}
	void DoSomethingImportant()
	{
		std::cout << "Invoker: Doest anybody want something done before i begin?\n";
		if (on_start_)
		{
			on_start_->execute();
		}

		std::cout << "Invoker: ... doing something really important...\n";
		std::cout << "Invoker: Does anybody want something done after I finish?\n";
		if (on_finish_)
		{
			on_finish_->execute();
		}
	}
};

int main()
{
	Invoker* invoker = new Invoker;	// buton gibi bu
	invoker->SetOnStart(new SimpleCommand("Say Hi!"));
	Receiver rx;
	invoker->SetOnFinish(new ComplexCommand(&rx, "Send email", "Save Report"));
	invoker->DoSomethingImportant();
	delete invoker;
}
