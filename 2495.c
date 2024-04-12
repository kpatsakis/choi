void fun()
{
  int entity_0 = 49;
  char entity_1[entity_0] = "";
  entity_1 = NULL;
  memset(entity_1, 'O', entity_0-1);
  entity_1[entity_0-1]='';
  entity_0 = 87;
  entity_1[56] = 'Z';
}