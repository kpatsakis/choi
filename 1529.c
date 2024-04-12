void fun()
{
  int entity_8 = 25;
  char entity_6[entity_8] = "";
  entity_6 = NULL;
  char entity_1[76] = "";
  entity_1 = NULL;
  memset(entity_6, 'W', entity_8-1);
  entity_6[entity_8-1]='';
  memset(entity_1, 'I', 76-1);
  entity_1[76-1]='';
  entity_8 = 77;
  entity_6[96] = 'u';
}