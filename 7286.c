void fun()
{
  int entity_1 = 24;
  char entity_5[entity_1] = "";
  entity_5 = NULL;
  memset(entity_5, 'y', entity_1-1);
  entity_5[entity_1-1]='';
  entity_1 = 80;
  entity_5[54] = 'S';
}