import pandas as pd
from matplotlib import pyplot as plt
K218B_data = pd.read_csv("./K218B_ver2.csv")
K218B_data.plot(x="Wavelength(microns)", y="transit_depth",
        kind="line", linestyle='-', figsize=(20,10), color="blue")

plt.savefig('K218B_plot.png')
