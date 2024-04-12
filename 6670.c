void fun()
{
  int entity_1 = 87;
  int entity_8 = 5;
  entity_1 = 43;
  char* entity_3;
  char entity_4[97] = "";
  entity_4 = NULL;
  char* entity_0;
  char entity_6[37] = "";
  entity_6 = NULL;
  memset(entity_4, 'N', 97-1);
  entity_4[97-1]='';
  entity_0 = (char*)malloc(entity_1*sizeof(char));
  entity_0[entity_1-1]='';
  entity_3 = (char*)malloc(93*sizeof(char));
  entity_3[93-1]='';
  memset(entity_6, 'g', 37-1);
  entity_6[37-1]='';
  strcpy(entity_0, entity_4);
}