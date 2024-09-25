class Employee:
    def __init__(self) -> None:
        self.__salary = 10000

    def get_salary(self):
        return self.__salary


a = Employee()
print(a.get_salary())
