void fun()
{
  int entity_1 = 31;
  char entity_6[entity_1] = "";
  entity_6 = NULL;
  memset(entity_6, 't', entity_1-1);
  entity_6[entity_1-1]='';
  entity_6[21] = 'q';
}