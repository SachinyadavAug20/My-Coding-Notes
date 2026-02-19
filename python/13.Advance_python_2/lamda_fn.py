def qe_fun(x):
    return x**2+6*x+20
def homogenous_in_x_y_fn(x,y):
    return x**2 + y**2 +2*x*y

qe=lambda x:x**2+6*x+20
print(qe(6),qe_fun(6))

homogenous_in_x_y=lambda x,y:x**2 + y**2 +2*x*y
print(homogenous_in_x_y(12,23),homogenous_in_x_y_fn(12,23))

