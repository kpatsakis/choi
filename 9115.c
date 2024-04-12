void fun()
{
  int entity_5 = 48;
  char entity_9[entity_5] = "";
  entity_9 = NULL;
  memset(entity_9, 'e', entity_5-1);
  entity_9[entity_5-1]='';
  entity_9[59] = 'r';
}