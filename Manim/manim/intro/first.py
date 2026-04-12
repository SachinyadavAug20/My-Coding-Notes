from manim import *

class firstAnimation(Scene):
    def construct(self) -> None:
        box=Circle(radius=1,stroke_color=GREEN_C,stroke_opacity=0.7,fill_color=RED_B,fill_opacity=0.5)
        self.add(box)
        self.play(
            box.animate.shift(RIGHT*2),run_time=2
        )
        self.play(
            box.animate.shift(UP*3),run_time=2
        )
        self.play(
            box.animate.shift(DOWN*2+LEFT*5),run_time=2
        )
        self.play(
            box.animate.shift(UP*1.5+RIGHT*1),run_time=2
        )

def fittingObjects(Scene):
    def constructor(self):
        axes=Axes(x_range=[-3,3,1],y_range=[-3,3,1],x_length=6,y_length=6)
        axes.to_edge(LEFT,buff=0.5)
        
        circle=Circle(stroke_width=6,stroke_color=YELLOW,fill_color=RED_C,fill_opacity=0.8)
        circle.set_width(2).to_edge(DR,buff=0)

        traingle=Triangle(stroke_color=ORANGE,stroke_width=10,fill_color=GREY).set_height(2).shift(DOWN*3+RIGHT*3)

