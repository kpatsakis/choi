void fun()
{
  int entity_8 = 12;
  entity_8 = 22;
  char entity_9 = 'e';
  char entity_3[63] = "";
  entity_3 = NULL;
  memset(entity_3, 'd', 63-1);
  entity_3[63-1]='';
  entity_3[entity_8] = 'E';
}