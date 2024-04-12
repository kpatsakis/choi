void fun()
{
  int entity_7 = 95;
  char entity_4[53] = "";
  entity_4 = NULL;
  char entity_8[33] = "";
  entity_8 = NULL;
  char entity_1 = 'b';
  memset(entity_4, 'Z', 53-1);
  entity_4[53-1]='';
  memset(entity_8, 'r', 33-1);
  entity_8[33-1]='';
  entity_7 = 97;
  entity_4[entity_7] = 'n';
}