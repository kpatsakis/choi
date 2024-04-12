void fun()
{
  int entity_4 = 83;
  entity_4 = 48;
  char entity_9[40] = "";
  entity_9 = NULL;
  char entity_6[46] = "";
  entity_6 = NULL;
  memset(entity_9, 'C', 40-1);
  entity_9[40-1]='';
  memset(entity_6, 'G', 46-1);
  entity_6[46-1]='';
  entity_9[entity_4] = 'J';
}