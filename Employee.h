#pragma once

class Employee {
public:
	int id;
	float salary;
	enum etype {
		LABASSISTANT = 1, 
		SECRETARY, 
		MANAGER 
	} etype_;
public:
	void setemploy();
	void getemploy();
};