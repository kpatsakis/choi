void fun()
{
  int entity_3 = 20;
  char entity_7[46] = "";
  entity_7 = NULL;
  char entity_4 = 'e';
  char entity_9[4] = "";
  entity_9 = NULL;
  char entity_5[20] = "";
  entity_5 = NULL;
  memset(entity_7, 'j', 46-1);
  entity_7[46-1]='';
  memset(entity_5, 'Z', 20-1);
  entity_5[20-1]='';
  memset(entity_9, 'Q', 4-1);
  entity_9[4-1]='';
  entity_5[entity_3] = 'q';
}