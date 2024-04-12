void fun()
{
  int entity_6 = 27;
  char entity_1[entity_6] = "";
  entity_1 = NULL;
  memset(entity_1, 'K', entity_6-1);
  entity_1[entity_6-1]='';
  entity_6 = 22;
  entity_1[30] = 's';
}