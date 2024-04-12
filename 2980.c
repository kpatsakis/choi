void fun()
{
  int entity_5 = 50;
  char entity_9 = 'D';
  char entity_2[19] = "";
  entity_2 = NULL;
  char entity_6 = 't';
  memset(entity_2, 'T', 19-1);
  entity_2[19-1]='';
  entity_5 = 83;
  entity_2[entity_5] = 'M';
}