void fun()
{
  int entity_0 = 22;
  char entity_5[33] = "";
  entity_5 = NULL;
  char entity_6[entity_0] = "";
  entity_6 = NULL;
  memset(entity_5, 'j', 33-1);
  entity_5[33-1]='';
  memset(entity_6, 'I', entity_0-1);
  entity_6[entity_0-1]='';
  entity_6[69] = 'T';
}