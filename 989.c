void fun()
{
  int entity_3 = 54;
  char entity_7[entity_3] = "";
  entity_7 = NULL;
  memset(entity_7, 'c', entity_3-1);
  entity_7[entity_3-1]='';
  entity_3 = 92;
  entity_7[81] = 't';
}