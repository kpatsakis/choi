void fun()
{
  int entity_2 = 12;
  char entity_6[82] = "";
  entity_6 = NULL;
  char entity_4[32] = "";
  entity_4 = NULL;
  char entity_3[61] = "";
  entity_3 = NULL;
  memset(entity_6, 'L', 82-1);
  entity_6[82-1]='';
  memset(entity_4, 'o', 32-1);
  entity_4[32-1]='';
  memset(entity_3, 'z', 61-1);
  entity_3[61-1]='';
  entity_4[entity_2] = 'u';
}