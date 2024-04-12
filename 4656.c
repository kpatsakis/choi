void fun()
{
  int entity_2 = 76;
  int entity_7 = 38;
  char entity_0[35] = "";
  entity_0 = NULL;
  char* entity_8;
  char entity_6[3] = "";
  entity_6 = NULL;
  char entity_3 = 'a';
  memset(entity_0, 'f', 35-1);
  entity_0[35-1]='';
  memset(entity_6, 'Q', 3-1);
  entity_6[3-1]='';
  entity_8 = (char*)malloc(entity_2*sizeof(char));
  entity_8[entity_2-1]='';
  memcpy(entity_8, entity_6, 3*sizeof(char));
}