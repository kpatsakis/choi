void fun()
{
  int entity_6 = 78;
  char entity_3[15] = "";
  entity_3 = NULL;
  char entity_9[76] = "";
  entity_9 = NULL;
  char entity_4[entity_6] = "";
  entity_4 = NULL;
  memset(entity_4, 'p', entity_6-1);
  entity_4[entity_6-1]='';
  memset(entity_3, 's', 15-1);
  entity_3[15-1]='';
  memset(entity_9, 'Z', 76-1);
  entity_9[76-1]='';
  entity_6 = 56;
  entity_4[77] = 'F';
}