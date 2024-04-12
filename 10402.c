void fun()
{
  char entity_5[10] = "";
  memset(entity_5, 'X', 10-1);
  entity_5[10-1]='0';
  entity_5[24] = 'V';
}