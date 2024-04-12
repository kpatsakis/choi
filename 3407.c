void fun()
{
  int entity_4 = 61;
  int entity_8 = 83;
  entity_8 = 42;
  char entity_0[32] = "";
  entity_0 = NULL;
  char entity_2[52] = "";
  entity_2 = NULL;
  memset(entity_2, 'K', 52-1);
  entity_2[52-1]='';
  memset(entity_0, 'J', 32-1);
  entity_0[32-1]='';
  entity_2[entity_8] = 'A';
}