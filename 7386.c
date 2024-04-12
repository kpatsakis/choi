void fun()
{
  int entity_1 = 26;
  int entity_7 = 7;
  entity_7 = 30;
  char entity_9[50] = "";
  entity_9 = NULL;
  char entity_6[47] = "";
  entity_6 = NULL;
  memset(entity_6, 't', 47-1);
  entity_6[47-1]='';
  memset(entity_9, 'P', 50-1);
  entity_9[50-1]='';
  entity_6[entity_7] = 'q';
}