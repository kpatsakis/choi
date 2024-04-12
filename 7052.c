void fun()
{
  int entity_1 = 27;
  int entity_8 = 59;
  char entity_3 = 'y';
  char entity_7[76] = "";
  entity_7 = NULL;
  memset(entity_7, 'i', 76-1);
  entity_7[76-1]='';
  entity_7[entity_1] = 'Q';
}