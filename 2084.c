void fun()
{
  int entity_8 = 47;
  int entity_3 = 50;
  char entity_6[13] = "";
  entity_6 = NULL;
  memset(entity_6, 'a', 13-1);
  entity_6[13-1]='';
  entity_8 = 27;
  entity_6[entity_8] = 's';
}