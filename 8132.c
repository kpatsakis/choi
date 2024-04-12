void fun()
{
  int entity_3 = 44;
  entity_3 = 32;
  char entity_6[entity_3] = "";
  entity_6 = NULL;
  memset(entity_6, 'T', entity_3-1);
  entity_6[entity_3-1]='';
  entity_6[11] = 'D';
}