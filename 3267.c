void fun()
{
  int entity_7 = 97;
  entity_7 = 68;
  char entity_5[entity_7] = "";
  entity_5 = NULL;
  memset(entity_5, 'v', entity_7-1);
  entity_5[entity_7-1]='';
  entity_5[97] = 'S';
}