void fun()
{
  int entity_0 = 82;
  int entity_1 = 33;
  char entity_7[24] = "";
  entity_7 = NULL;
  char entity_8[91] = "";
  entity_8 = NULL;
  char entity_2[36] = "";
  entity_2 = NULL;
  memset(entity_2, 'e', 36-1);
  entity_2[36-1]='';
  memset(entity_7, 'A', 24-1);
  entity_7[24-1]='';
  memset(entity_8, 'F', 91-1);
  entity_8[91-1]='';
  entity_8[entity_0] = 'P';
}