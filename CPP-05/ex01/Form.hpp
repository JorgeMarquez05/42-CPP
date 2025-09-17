#pragma once

class Form
{
private:
    const std::string _name;
    bool _signed;
    const int _grade_to_sign;
    const int _grade_to_execute;

public:
    Form();
};

Form::Form(): _name("Form"), _signed(false), _grade_to_sign(50),_grade_to_execute(25) {}