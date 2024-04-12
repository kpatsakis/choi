void fun()
{
  int entity_6 = 87;
  char entity_4[54] = "";
  entity_4 = NULL;
  char entity_5[28] = "";
  entity_5 = NULL;
  char entity_8[92] = "";
  entity_8 = NULL;
  memset(entity_8, 'N', 92-1);
  entity_8[92-1]='';
  memset(entity_5, 'g', 28-1);
  entity_5[28-1]='';
  memset(entity_4, 'o', 54-1);
  entity_4[54-1]='';
  entity_4[entity_6] = 'z';
}