void fun()
{
  int entity_2 = 98;
  char entity_9[41] = "";
  entity_9 = NULL;
  char entity_5[52] = "";
  entity_5 = NULL;
  char entity_6[75] = "";
  entity_6 = NULL;
  memset(entity_9, 'I', 41-1);
  entity_9[41-1]='';
  memset(entity_6, 'z', 75-1);
  entity_6[75-1]='';
  memset(entity_5, 'L', 52-1);
  entity_5[52-1]='';
  entity_9[entity_2] = 'n';
}