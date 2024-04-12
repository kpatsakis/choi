void fun()
{
  int entity_1 = 64;
  char entity_4[entity_1] = "";
  entity_4 = NULL;
  memset(entity_4, 'P', entity_1-1);
  entity_4[entity_1-1]='';
  entity_1 = 38;
  entity_4[49] = 'Y';
}