void fun()
{
  int entity_9 = 11;
  int entity_6 = 18;
  char entity_2[entity_9] = "";
  entity_2 = NULL;
  memset(entity_2, 'g', entity_9-1);
  entity_2[entity_9-1]='';
  entity_9 = 65;
  entity_2[1] = 'N';
}