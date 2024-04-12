void fun()
{
  int entity_3 = 53;
  char entity_6[87] = "";
  entity_6 = NULL;
  memset(entity_6, 'j', 87-1);
  entity_6[87-1]='';
  entity_6[entity_3] = 'q';
}