void fun()
{
  int entity_5 = 52;
  int entity_1 = 68;
  char entity_4[entity_5] = "";
  entity_4 = NULL;
  memset(entity_4, 'f', entity_5-1);
  entity_4[entity_5-1]='';
  entity_4[1] = 'V';
}