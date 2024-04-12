void fun()
{
  int entity_9 = 87;
  entity_9 = 1;
  char entity_2[entity_9] = "";
  entity_2 = NULL;
  memset(entity_2, 'M', entity_9-1);
  entity_2[entity_9-1]='';
  entity_2[84] = 'K';
}