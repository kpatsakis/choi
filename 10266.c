void fun()
{
  char entity_1[82] = "";
  memset(entity_1, 'P', 82-1);
  entity_1[82-1]='0';
  entity_1[42] = 'y';
}