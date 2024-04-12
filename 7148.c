void fun()
{
  int entity_3 = 46;
  char entity_9 = 's';
  char entity_2[entity_3] = "";
  entity_2 = NULL;
  memset(entity_2, 'a', entity_3-1);
  entity_2[entity_3-1]='';
  entity_3 = 98;
  entity_2[51] = 'f';
}