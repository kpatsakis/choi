void fun()
{
  int entity_8 = 52;
  char entity_6[13] = "";
  entity_6 = NULL;
  memset(entity_6, 'Y', 13-1);
  entity_6[13-1]='';
  entity_6[entity_8] = 'K';
}