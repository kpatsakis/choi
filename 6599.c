void fun()
{
  int entity_9 = 58;
  char entity_0[23] = "";
  entity_0 = NULL;
  char entity_8[21] = "";
  entity_8 = NULL;
  memset(entity_0, 'j', 23-1);
  entity_0[23-1]='';
  memset(entity_8, 'I', 21-1);
  entity_8[21-1]='';
  entity_8[entity_9] = 'q';
}