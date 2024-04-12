void fun()
{
  int entity_3 = 6;
  int entity_7 = 66;
  char entity_4[entity_7] = "";
  entity_4 = NULL;
  memset(entity_4, 'P', entity_7-1);
  entity_4[entity_7-1]='';
  entity_7 = 8;
  entity_4[97] = 'p';
}