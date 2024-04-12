void fun()
{
  int entity_7 = 5;
  entity_7 = 32;
  char entity_3[32] = "";
  entity_3 = NULL;
  memset(entity_3, 'i', 32-1);
  entity_3[32-1]='';
  entity_3[entity_7] = 'O';
}