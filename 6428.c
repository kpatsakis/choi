void fun()
{
  int entity_4 = 74;
  int entity_2 = 92;
  entity_4 = 54;
  char entity_7[24] = "";
  entity_7 = NULL;
  memset(entity_7, 'd', 24-1);
  entity_7[24-1]='';
  entity_7[entity_4] = 'B';
}