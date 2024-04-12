void fun()
{
  char entity_2 = 'V';
  char entity_8 = 'B';
  char entity_5[91] = "";
  entity_5 = NULL;
  memset(entity_5, 'X', 91-1);
  entity_5[91-1]='';
  entity_5[82] = 'W';
}