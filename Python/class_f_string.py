class Comedian:
    def _init_(self, first_name, last_name, age):
        self.first_name = first_name
        self.last_name = last_name
        self.age = age
        
    def _str_(self):
        return f"{self.first_name} {self.last_name} is {self.age}."
    
    def _str_(self):
        return f"{self.first_name} {self.last_name} is {self.age}. Surprise!"
    
new_comedian = Comedian("Eric", "Idle", "74")
print(f"{new_comedian}")