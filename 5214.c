void fun()
{
  int entity_1 = 26;
  int entity_7 = 0;
  char entity_5 = 'z';
  char entity_6[22] = "";
  entity_6 = NULL;
  memset(entity_6, 'z', 22-1);
  entity_6[22-1]='';
  entity_6[entity_1] = 's';
}