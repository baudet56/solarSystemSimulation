import matplotlib.pyplot as plt


f_sun = open("sun.txt")
f_earth = open("earth.txt")
d_sun = f_sun.read().split("\n")[1:]
d_earth = f_earth.read().split("\n")[1:]


f_sun.close()
f_earth.close()

Lxe = []
Lye = []
Lxs = []
Lys = []
for k in range(0, len(d_earth)-1, 500):
    #print(d_sun[k])
    xs, ys = list(map(float, d_sun[k].split(";")))
    xe, ye = list(map(float, d_earth[k].split(";")))
    Lxe.append(xe)
    Lye.append(ye)
    Lxs.append(xs)
    Lys.append(ys)

plt.plot(Lxe, Lye, ".-")
plt.plot(Lxs, Lys, "+-")
plt.show()
