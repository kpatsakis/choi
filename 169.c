void fun()
{
  int entity_6 = 61;
  char entity_7[81] = "";
  entity_7 = NULL;
  memset(entity_7, 'z', 81-1);
  entity_7[81-1]='';
  entity_7[entity_6] = 'R';
}