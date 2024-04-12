void fun()
{
  int entity_4 = 76;
  entity_4 = 6;
  char entity_6[84] = "";
  entity_6 = NULL;
  memset(entity_6, 'p', 84-1);
  entity_6[84-1]='';
  entity_6[entity_4] = 'r';
}