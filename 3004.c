void fun()
{
  int entity_3 = 83;
  char entity_6[entity_3] = "";
  entity_6 = NULL;
  memset(entity_6, 'T', entity_3-1);
  entity_6[entity_3-1]='';
  entity_3 = 32;
  entity_6[50] = 'U';
}