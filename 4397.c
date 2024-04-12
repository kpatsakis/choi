void fun()
{
  int entity_3 = 26;
  char entity_6[54] = "";
  entity_6 = NULL;
  memset(entity_6, 'j', 54-1);
  entity_6[54-1]='';
  entity_3 = 12;
  entity_6[entity_3] = 'u';
}