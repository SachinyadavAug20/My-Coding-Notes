class World:
    dimesion="3D"
    Desc="This world is for rust dev"
    def worldinfo(self):
        print(f"This {self.name} is a {self.dimesion} dimesionly world.Descriptions of this world {self.Desc}")
    def __init__(self,name,demsion,desc): # This is a dunder method
        self.name=name
        self.dimesion=demsion
        self.Desc=desc
        print("created World.........")

W1=World("Worlfylx","3D","I am not sure aout it")
W1.worldinfo()
W1.Desc="This world is for rust dev"
W1.dimesion="1D"
W1.worldinfo()

w2=World("RealLand","2D","This is a world of 2D people")
w2.worldinfo()
