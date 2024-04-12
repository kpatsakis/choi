void fun()
{
  int entity_4 = 35;
  char entity_9[entity_4] = "";
  entity_9 = NULL;
  char entity_7 = 'k';
  memset(entity_9, 'm', entity_4-1);
  entity_9[entity_4-1]='';
  entity_9[64] = 'k';
}