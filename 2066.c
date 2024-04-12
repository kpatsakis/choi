void fun()
{
  int entity_8 = 38;
  entity_8 = 20;
  char entity_5[64] = "";
  entity_5 = NULL;
  char entity_3[36] = "";
  entity_3 = NULL;
  memset(entity_3, 'h', 36-1);
  entity_3[36-1]='';
  memset(entity_5, 'o', 64-1);
  entity_5[64-1]='';
  entity_3[entity_8] = 'g';
}