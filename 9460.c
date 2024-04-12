void fun()
{
  int entity_5 = 39;
  int entity_8 = 87;
  entity_8 = 44;
  char entity_1[entity_8] = "";
  entity_1 = NULL;
  memset(entity_1, 'd', entity_8-1);
  entity_1[entity_8-1]='';
  entity_1[14] = 'I';
}