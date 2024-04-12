void fun()
{
  int entity_8 = 36;
  char entity_7[entity_8] = "";
  entity_7 = NULL;
  memset(entity_7, 'V', entity_8-1);
  entity_7[entity_8-1]='';
  entity_7[86] = 'q';
}