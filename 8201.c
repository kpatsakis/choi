void fun()
{
  char entity_6 = 'w';
  char entity_3[100] = "";
  entity_3 = NULL;
  memset(entity_3, 'A', 100-1);
  entity_3[100-1]='';
  entity_3[13] = 'W';
}