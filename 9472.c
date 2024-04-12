void fun()
{
  int entity_9 = 90;
  char entity_3 = 'p';
  char entity_8[entity_9] = "";
  entity_8 = NULL;
  memset(entity_8, 'U', entity_9-1);
  entity_8[entity_9-1]='';
  entity_8[57] = 'q';
}