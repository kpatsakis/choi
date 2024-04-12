void fun()
{
  int entity_7 = 63;
  entity_7 = 28;
  char entity_1[entity_7] = "";
  entity_1 = NULL;
  memset(entity_1, 'X', entity_7-1);
  entity_1[entity_7-1]='';
  entity_1[81] = 'b';
}