void fun()
{
  int entity_8 = 99;
  char entity_7[entity_8] = "";
  entity_7 = NULL;
  memset(entity_7, 'Y', entity_8-1);
  entity_7[entity_8-1]='';
  entity_7[13] = 'u';
}