void fun()
{
  int entity_0 = 73;
  entity_0 = 99;
  char* entity_1;
  char* entity_8;
  char entity_6[51] = "";
  entity_6 = NULL;
  char entity_7[41] = "";
  entity_7 = NULL;
  entity_8 = (char*)malloc(0*sizeof(char));
  entity_8[0-1]='';
  entity_1 = (char*)malloc(entity_0*sizeof(char));
  entity_1[entity_0-1]='';
  memset(entity_6, 'm', 51-1);
  entity_6[51-1]='';
  memset(entity_7, 'u', 41-1);
  entity_7[41-1]='';
  strcpy(entity_1, entity_6);
}