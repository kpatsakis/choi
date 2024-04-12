void fun()
{
  int entity_1 = 63;
  char entity_7[entity_1] = "";
  entity_7 = NULL;
  char entity_9 = 'S';
  memset(entity_7, 'K', entity_1-1);
  entity_7[entity_1-1]='';
  entity_1 = 93;
  entity_7[89] = 'W';
}