void fun()
{
  int entity_7 = 28;
  char entity_9[entity_7] = "";
  entity_9 = NULL;
  memset(entity_9, 'H', entity_7-1);
  entity_9[entity_7-1]='';
  entity_7 = 57;
  entity_9[66] = 'T';
}