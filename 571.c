void fun()
{
  int entity_1 = 85;
  char entity_8[entity_1] = "";
  entity_8 = NULL;
  memset(entity_8, 'Y', entity_1-1);
  entity_8[entity_1-1]='';
  entity_1 = 56;
  entity_8[99] = 'V';
}