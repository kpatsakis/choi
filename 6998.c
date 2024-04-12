void fun()
{
  int entity_2 = 98;
  int entity_7 = 75;
  entity_2 = 24;
  char entity_3[64] = "";
  entity_3 = NULL;
  memset(entity_3, 'f', 64-1);
  entity_3[64-1]='';
  entity_3[entity_2] = 'Z';
}