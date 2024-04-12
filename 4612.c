void fun()
{
  int entity_9 = 6;
  char entity_7[entity_9] = "";
  entity_7 = NULL;
  char entity_4[17] = "";
  entity_4 = NULL;
  memset(entity_7, 'j', entity_9-1);
  entity_7[entity_9-1]='';
  memset(entity_4, 's', 17-1);
  entity_4[17-1]='';
  entity_7[44] = 'B';
}