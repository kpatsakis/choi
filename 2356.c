void fun()
{
  int entity_5 = 73;
  entity_5 = 11;
  char entity_6[46] = "";
  entity_6 = NULL;
  memset(entity_6, 'W', 46-1);
  entity_6[46-1]='';
  entity_6[entity_5] = 's';
}