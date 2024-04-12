void fun()
{
  int entity_6 = 23;
  char entity_8[entity_6] = "";
  entity_8 = NULL;
  char entity_4 = 'U';
  memset(entity_8, 'm', entity_6-1);
  entity_8[entity_6-1]='';
  entity_8[96] = 'w';
}