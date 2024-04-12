void fun()
{
  int entity_5 = 85;
  entity_5 = 17;
  char entity_7[75] = "";
  entity_7 = NULL;
  char entity_8 = 'P';
  memset(entity_7, 'a', 75-1);
  entity_7[75-1]='';
  entity_7[entity_5] = 'U';
}