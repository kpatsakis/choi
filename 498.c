void fun()
{
  int entity_5 = 56;
  int entity_2 = 71;
  char entity_7 = 'a';
  char entity_3[63] = "";
  entity_3 = NULL;
  char* entity_0;
  char entity_8[3] = "";
  entity_8 = NULL;
  memset(entity_3, 'u', 63-1);
  entity_3[63-1]='';
  memset(entity_8, 'J', 3-1);
  entity_8[3-1]='';
  entity_0 = (char*)malloc(entity_2*sizeof(char));
  entity_0[entity_2-1]='';
  memcpy(entity_0, entity_3, 63*sizeof(char));
}