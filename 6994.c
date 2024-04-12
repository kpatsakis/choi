void fun()
{
  int entity_8 = 92;
  entity_8 = 60;
  char entity_6[53] = "";
  entity_6 = NULL;
  memset(entity_6, 'l', 53-1);
  entity_6[53-1]='';
  entity_6[entity_8] = 'a';
}