void fun()
{
  int entity_6 = 48;
  char entity_2[17] = "";
  entity_2 = NULL;
  char entity_9[entity_6] = "";
  entity_9 = NULL;
  memset(entity_2, 'e', 17-1);
  entity_2[17-1]='';
  memset(entity_9, 'J', entity_6-1);
  entity_9[entity_6-1]='';
  entity_9[50] = 'P';
}