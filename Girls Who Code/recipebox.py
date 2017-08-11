#print("Ingredients to make Delicious Rice Pudding")
from time import sleep
from os import system


ricepudding = ['ingredients', 'instructions']
ingredients = ['2 cups of water','1 cup of Arborio Rice','3 cups of vanilla soy milk','1/4 cup of sugar','pinch salt','one cinnamon stick','1/2 tsp of vanilla extract','tsp of ground cinnamon','1/4 of ground nutmeg','2tbl spoons of sweetned condensed milk']

instructions=[  'Preheat the oven to 375 degrees F.','Bring the water to a boil in a medium sized, heavy, ovenproof saucepan.',  'Add the rice, cover, and simmer for 20 minutes, until rice is nearly cooked.' , ' In a large bowl, whisk the soymilk, sugar, and salt.',' When the rice is cooked and still hot, add the soymilk mixture and cinnamon stick.',' Cover, place in the oven and cook for 45 minutes.','Remove from the oven, uncover, and remove the cinnamon stick.',' Stir in the vanilla, cinnamon and nutmeg.',' Pudding will be slightly liquidy; the liquid will continue to absorb into the rice and thicken as the pudding cools.','Distribute among 8 bowls, drizzle each with 1 teaspoon of the condensed milk.', 'Dust with cinnamon and nutmeg, if desired.', 'Serve warm or at room temperature.']

print('Here is a recipe to make Rice Pudding')
sleep(5)

print(ingredients)
sleep(5)
system('cls')
