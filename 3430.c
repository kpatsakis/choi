void fun()
{
  int entity_9 = 4;
  char entity_2[8] = "";
  entity_2 = NULL;
  memset(entity_2, 'Q', 8-1);
  entity_2[8-1]='';
  entity_2[entity_9] = 'l';
}