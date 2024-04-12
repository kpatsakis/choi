void fun()
{
  char entity_3[42] = "";
  memset(entity_3, 'R', 42-1);
  entity_3[42-1]='0';
  entity_3[9] = 'c';
}