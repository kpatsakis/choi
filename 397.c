void fun()
{
  int entity_5 = 64;
  int entity_9 = 65;
  char entity_7[entity_5] = "";
  entity_7 = NULL;
  memset(entity_7, 'b', entity_5-1);
  entity_7[entity_5-1]='';
  entity_7[8] = 'N';
}