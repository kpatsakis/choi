void fun()
{
  int entity_9 = 33;
  char entity_2[19] = "";
  entity_2 = NULL;
  char entity_4[99] = "";
  entity_4 = NULL;
  memset(entity_4, 'w', 99-1);
  entity_4[99-1]='';
  memset(entity_2, 'Q', 19-1);
  entity_2[19-1]='';
  entity_9 = 41;
  entity_4[entity_9] = 'P';
}