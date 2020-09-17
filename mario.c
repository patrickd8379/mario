int height;
printf("Height: ")
scanf("%d", &height)
while(height < 1)
{
  printf("Height: ")
  scanf("%d", &height)
}
while(height > 23)
{
  printf("Height: ")
  scanf("%d", &height)
}
type rows[height];
int i = height - 1;
int j = 0;
while(i > 1)
{
  int blocksLeft = (height - i) + 1;
  int airLeft = i;
  while(airLeft > 1)
  {
    char air = " ";
    strncat(rows[i], &air, 1)
    airLeft --;
  }
  while(blocksLeft > 1)
  {
    char block = "#";
    strncat(rows[i], &block, 1)
    blocksLeft --;
  }
  i --;
}
for(j = 1; j <= height; i++)
{
  printf(rows[j], "\n")
}
