void fun()
{
  int entity_9 = 52;
  char entity_2[entity_9] = "";
  entity_2 = NULL;
  memset(entity_2, 'g', entity_9-1);
  entity_2[entity_9-1]='';
  entity_9 = 26;
  entity_2[94] = 'A';
}