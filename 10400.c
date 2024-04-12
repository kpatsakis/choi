void fun()
{
  char entity_1[40] = "";
  memset(entity_1, 'u', 40-1);
  entity_1[40-1]='0';
  entity_1[88] = 'c';
}