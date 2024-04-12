void fun()
{
  int entity_3 = 88;
  char entity_5[32] = "";
  entity_5 = NULL;
  memset(entity_5, 'm', 32-1);
  entity_5[32-1]='';
  entity_3 = 63;
  entity_5[entity_3] = 'U';
}