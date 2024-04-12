void fun()
{
  int entity_5 = 84;
  char entity_9[entity_5] = "";
  entity_9 = NULL;
  char entity_8[73] = "";
  entity_8 = NULL;
  memset(entity_9, 's', entity_5-1);
  entity_9[entity_5-1]='';
  memset(entity_8, 'h', 73-1);
  entity_8[73-1]='';
  entity_5 = 24;
  entity_9[59] = 'M';
}