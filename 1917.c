void fun()
{
  int entity_5 = 90;
  char entity_6[85] = "";
  entity_6 = NULL;
  memset(entity_6, 'k', 85-1);
  entity_6[85-1]='';
  entity_6[entity_5] = 'O';
}