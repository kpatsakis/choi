void fun()
{
  int entity_1 = 14;
  char entity_5[46] = "";
  entity_5 = NULL;
  memset(entity_5, 'm', 46-1);
  entity_5[46-1]='';
  entity_5[entity_1] = 'W';
}