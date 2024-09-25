class A:
    def __init__(self) -> None:
        self.name = "Raju"


class B(A):
    pass


class C(B):
    pass


obj = C()

print(obj.name)
