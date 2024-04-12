void fun()
{
  int entity_5 = 12;
  entity_5 = 51;
  char entity_7[entity_5] = "";
  entity_7 = NULL;
  memset(entity_7, 'U', entity_5-1);
  entity_7[entity_5-1]='';
  entity_7[55] = 'n';
}