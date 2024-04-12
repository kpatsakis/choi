void fun()
{
  int entity_6 = 60;
  char entity_9[entity_6] = "";
  entity_9 = NULL;
  char entity_4[22] = "";
  entity_4 = NULL;
  char entity_5 = 'T';
  memset(entity_4, 's', 22-1);
  entity_4[22-1]='';
  memset(entity_9, 't', entity_6-1);
  entity_9[entity_6-1]='';
  entity_9[77] = 'Z';
}