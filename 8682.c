void fun()
{
  int entity_9 = 13;
  int entity_2 = 51;
  char entity_7 = 'C';
  char entity_6[entity_9] = "";
  entity_6 = NULL;
  memset(entity_6, 'f', entity_9-1);
  entity_6[entity_9-1]='';
  entity_9 = 21;
  entity_6[48] = 'T';
}