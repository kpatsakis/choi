void fun()
{
  char entity_1 = 'l';
  char entity_5[20] = "";
  memset(entity_5, 'B', 20-1);
  entity_5[20-1]='0';
  entity_5[59] = 'X';
}