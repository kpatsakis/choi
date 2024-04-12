void fun()
{
  int entity_0 = 41;
  char entity_9[29] = "";
  entity_9 = NULL;
  char entity_4[80] = "";
  entity_4 = NULL;
  memset(entity_9, 'Y', 29-1);
  entity_9[29-1]='';
  memset(entity_4, 'j', 80-1);
  entity_4[80-1]='';
  entity_4[entity_0] = 'e';
}