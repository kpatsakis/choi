void fun()
{
  int entity_3 = 12;
  char entity_6[entity_3] = "";
  entity_6 = NULL;
  memset(entity_6, 't', entity_3-1);
  entity_6[entity_3-1]='';
  entity_6[8] = 'D';
}