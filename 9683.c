void fun()
{
  int entity_6 = 15;
  entity_6 = 54;
  char entity_5[17] = "";
  entity_5 = NULL;
  char entity_9[32] = "";
  entity_9 = NULL;
  memset(entity_9, 'w', 32-1);
  entity_9[32-1]='';
  memset(entity_5, 'I', 17-1);
  entity_5[17-1]='';
  entity_9[entity_6] = 'N';
}