void fun()
{
  char entity_1[2] = "";
  memset(entity_1, 'p', 2-1);
  entity_1[2-1]='0';
  entity_1[12] = 'V';
}