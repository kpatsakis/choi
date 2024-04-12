void fun()
{
  char entity_5[6] = "";
  entity_5 = NULL;
  memset(entity_5, 'o', 6-1);
  entity_5[6-1]='';
  entity_5[14] = 'W';
}