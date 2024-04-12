void fun()
{
  int entity_0 = 23;
  char* entity_8;
  char* entity_3;
  char entity_7[56] = "";
  entity_7 = NULL;
  char entity_6[entity_0] = "";
  entity_6 = NULL;
  char entity_1[74] = "";
  entity_1 = NULL;
  entity_8 = (char*)malloc(58*sizeof(char));
  entity_8[58-1]='';
  memset(entity_1, 'I', 74-1);
  entity_1[74-1]='';
  entity_3 = (char*)malloc(35*sizeof(char));
  entity_3[35-1]='';
  memset(entity_7, 'T', 56-1);
  entity_7[56-1]='';
  memset(entity_6, 't', entity_0-1);
  entity_6[entity_0-1]='';
  strcpy(entity_8, entity_6);
}