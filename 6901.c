void fun()
{
  int entity_4 = 22;
  char entity_7[10] = "";
  entity_7 = NULL;
  char* entity_3;
  char* entity_2;
  char entity_0[entity_4] = "";
  entity_0 = NULL;
  char entity_1[91] = "";
  entity_1 = NULL;
  entity_3 = (char*)malloc(97*sizeof(char));
  entity_3[97-1]='';
  memset(entity_0, 'W', entity_4-1);
  entity_0[entity_4-1]='';
  entity_2 = (char*)malloc(38*sizeof(char));
  entity_2[38-1]='';
  memset(entity_7, 'T', 10-1);
  entity_7[10-1]='';
  memset(entity_1, 'F', 91-1);
  entity_1[91-1]='';
  strcpy(entity_3, entity_0);
}