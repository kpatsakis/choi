void fun()
{
  int entity_6 = 85;
  entity_6 = 3;
  char entity_3 = 'I';
  char entity_1[91] = "";
  entity_1 = NULL;
  char entity_8[24] = "";
  entity_8 = NULL;
  memset(entity_8, 'd', 24-1);
  entity_8[24-1]='';
  memset(entity_1, 'r', 91-1);
  entity_1[91-1]='';
  entity_1[entity_6] = 'P';
}