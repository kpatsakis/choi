void fun()
{
  int entity_5 = 81;
  char entity_4[entity_5] = "";
  entity_4 = NULL;
  memset(entity_4, 'P', entity_5-1);
  entity_4[entity_5-1]='';
  entity_4[69] = 'V';
}