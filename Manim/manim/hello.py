from manim import *

class Hello(Scene):
    def construct(self):
        text = Text("Hello Sachin")
        self.play(Write(text))
        self.wait()
