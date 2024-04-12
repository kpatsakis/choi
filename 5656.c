void fun()
{
  int entity_3 = 20;
  char* entity_0;
  char entity_7[9] = "";
  entity_7 = NULL;
  char entity_8[63] = "";
  entity_8 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(entity_3*sizeof(char));
  entity_4[entity_3-1]='';
  memset(entity_7, 'a', 9-1);
  entity_7[9-1]='';
  memset(entity_8, 'k', 63-1);
  entity_8[63-1]='';
  entity_0 = (char*)malloc(57*sizeof(char));
  entity_0[57-1]='';
  strcpy(entity_4, entity_8);
}