void fun()
{
  int entity_7 = 28;
  char entity_9[21] = "";
  entity_9 = NULL;
  char entity_1 = 'P';
  memset(entity_9, 'Q', 21-1);
  entity_9[21-1]='';
  entity_9[entity_7] = 't';
}