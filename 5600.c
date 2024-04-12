void fun()
{
  int entity_5 = 43;
  int entity_9 = 100;
  char entity_8[entity_9] = "";
  entity_8 = NULL;
  char entity_3 = 'w';
  memset(entity_8, 'Y', entity_9-1);
  entity_8[entity_9-1]='';
  entity_8[33] = 'o';
}