#include "application.h"

int main()
{
	Application ax;

	ax.NewDocument("xml");
	ax.PrintDocument();
	ax.SaveDocument();
}