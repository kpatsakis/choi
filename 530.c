void fun()
{
  int entity_8 = 23;
  entity_8 = 71;
  char entity_6[46] = "";
  entity_6 = NULL;
  memset(entity_6, 't', 46-1);
  entity_6[46-1]='';
  entity_6[entity_8] = 'E';
}