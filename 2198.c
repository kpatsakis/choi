void fun()
{
  int entity_1 = 87;
  char entity_2[entity_1] = "";
  entity_2 = NULL;
  char entity_5[36] = "";
  entity_5 = NULL;
  char* entity_7;
  char entity_8[36] = "";
  entity_8 = NULL;
  char entity_4[35] = "";
  entity_4 = NULL;
  memset(entity_4, 'T', 35-1);
  entity_4[35-1]='';
  memset(entity_5, 'S', 36-1);
  entity_5[36-1]='';
  memset(entity_8, 'H', 36-1);
  entity_8[36-1]='';
  memset(entity_2, 'V', entity_1-1);
  entity_2[entity_1-1]='';
  entity_7 = (char*)malloc(70*sizeof(char));
  entity_7[70-1]='';
  memcpy(entity_7, entity_2, entity_1*sizeof(char));
}