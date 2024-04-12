void fun()
{
  int entity_9 = 75;
  entity_9 = 48;
  char entity_2 = 'E';
  char entity_1[24] = "";
  entity_1 = NULL;
  char entity_7[86] = "";
  entity_7 = NULL;
  memset(entity_1, 't', 24-1);
  entity_1[24-1]='';
  memset(entity_7, 'Z', 86-1);
  entity_7[86-1]='';
  entity_7[entity_9] = 'G';
}