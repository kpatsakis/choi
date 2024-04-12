void fun()
{
  int entity_8 = 61;
  char entity_6[entity_8] = "";
  entity_6 = NULL;
  memset(entity_6, 'C', entity_8-1);
  entity_6[entity_8-1]='';
  entity_8 = 15;
  entity_6[6] = 'X';
}