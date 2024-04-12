void fun()
{
  int entity_5 = 12;
  int entity_8 = 78;
  char entity_6[14] = "";
  entity_6 = NULL;
  memset(entity_6, 'Q', 14-1);
  entity_6[14-1]='';
  entity_6[entity_8] = 'j';
}