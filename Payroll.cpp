// Payroll.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "stdafx.h"
#include "Database.h"
#include "Payroll.h"
#include "string"

using namespace System;
using namespace System::Windows::Forms;

//Functions from class Payroll
float Payroll::newSalary(int hours, float phsalary, int ID)
{
	float new_salary;
	SQLConnect^ db = gcnew SQLConnect();
	try
	{
		new_salary = hours * phsalary;
		db->openConnection();
		String^ sql;
		// Storing the salary values in the database.
		sql = sql->Format("INSERT INTO salary(idemployee, employee_salary, number_of_hours, paid_per_hour) VALUES('{0}', '{1}', '{2}', '{3}')",
			ID, new_salary, hours, phsalary);
		MySqlCommand^ cmd = gcnew MySqlCommand(sql, db->getConnection());
		MySqlDataReader^ reader = cmd->ExecuteReader();

		return new_salary;
	}
	catch (MySqlException^ ex)
	{
		MessageBox::Show(ex->ToString());
		return false;
	}
}

float Payroll::newIncome(float Salary, float taxes, float benefits, int ID)
{
	float new_income;
	SQLConnect^ db = gcnew SQLConnect();
	try
	{
		new_income =  (Salary + benefits) - taxes;
		db->openConnection();
		String^ sql;
		// Storing the income values in the database.
		sql = sql->Format("INSERT INTO income(idemployee, employee_income, employee_salary, taxes, benefits) VALUES('{0}', '{1}', '{2}', '{3}', '{4}')",
			ID, new_income, Salary, taxes, benefits);
		MySqlCommand^ cmd = gcnew MySqlCommand(sql, db->getConnection());
		MySqlDataReader^ reader = cmd->ExecuteReader();

		return new_income;
	}
	catch (MySqlException^ ex)
	{
		MessageBox::Show(ex->ToString());
		return false;
	}

}

bool Payroll::checkName(String^ fname, String^ lname)
{
	SQLConnect^ db = gcnew SQLConnect();
	try
	{
		db->openConnection();
		String^ sql;
		// reader[0],  reader[1]
		sql = sql->Format("SELECT first_name, last_name FROM employee WHERE first_name='{0}' AND last_name='{1}'",
			fname, lname);
		MySqlCommand^ cmd = gcnew MySqlCommand(sql, db->getConnection());
		//Use datareader to execute your command when searching for results
		MySqlDataReader^ reader = cmd->ExecuteReader();
		//MessageBox::Show(sql);

		while (reader->Read())
		{
			//reader[0] is first value you called for so in this case would be username
			//Returns an array for each row
			String^ fnameCheck = reader[0]->ToString();
			String^ lnameCheck = reader[1]->ToString();
			//MessageBox::Show(fnameCheck);
			//MessageBox::Show(lnameCheck);
			if (fname == fnameCheck && lname == lnameCheck)
			{
				return true;
			}
			else {
				return false;
			}
		}

	}
	catch (MySqlException^ ex)
	{
		MessageBox::Show(ex->ToString());
		return false;
	}
}


bool Payroll::checkID(int ID)
{
	int employee_ID;
	SQLConnect^ db = gcnew SQLConnect();
	try
	{
		db->openConnection();
		String^ sql;
		// reader[0],  reader[1]
		sql = sql->Format("SELECT idemployee FROM employee WHERE idemployee='{0}'",
			ID);
		MySqlCommand^ cmd = gcnew MySqlCommand(sql, db->getConnection());
		//Use datareader to execute your command when searching for results
		MySqlDataReader^ reader = cmd->ExecuteReader();
		//MessageBox::Show(sql);

		while (reader->Read())
		{
			employee_ID = (int)(Convert::ToDouble(reader[0]));
		}

	}
	catch (MySqlException^ ex)
	{
		MessageBox::Show(ex->ToString());
		return false;
	}
	if (ID == employee_ID)
	{
		return true;
	}
	else {
		return false;
	}
}