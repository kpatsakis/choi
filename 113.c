void fun()
{
  int entity_1 = 70;
  char entity_0[91] = "";
  entity_0 = NULL;
  char entity_3[entity_1] = "";
  entity_3 = NULL;
  char entity_7 = 'O';
  memset(entity_3, 'C', entity_1-1);
  entity_3[entity_1-1]='';
  memset(entity_0, 'G', 91-1);
  entity_0[91-1]='';
  entity_1 = 16;
  entity_3[78] = 'U';
}