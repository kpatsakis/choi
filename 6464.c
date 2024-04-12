void fun()
{
  int entity_8 = 5;
  char entity_7[entity_8] = "";
  entity_7 = NULL;
  char entity_5 = 'G';
  memset(entity_7, 'l', entity_8-1);
  entity_7[entity_8-1]='';
  entity_8 = 9;
  entity_7[76] = 'H';
}