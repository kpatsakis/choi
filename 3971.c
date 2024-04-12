void fun()
{
  int entity_3 = 76;
  char entity_6[entity_3] = "";
  entity_6 = NULL;
  memset(entity_6, 'M', entity_3-1);
  entity_6[entity_3-1]='';
  entity_6[87] = 'U';
}