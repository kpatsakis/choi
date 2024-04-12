void fun()
{
  int entity_7 = 90;
  char* entity_3;
  char entity_5[entity_7] = "";
  entity_5 = NULL;
  char entity_2[34] = "";
  entity_2 = NULL;
  char entity_0[51] = "";
  entity_0 = NULL;
  char* entity_6;
  memset(entity_0, 'm', 51-1);
  entity_0[51-1]='';
  memset(entity_5, 'V', entity_7-1);
  entity_5[entity_7-1]='';
  entity_6 = (char*)malloc(21*sizeof(char));
  entity_6[21-1]='';
  entity_3 = (char*)malloc(35*sizeof(char));
  entity_3[35-1]='';
  memset(entity_2, 'f', 34-1);
  entity_2[34-1]='';
  strcpy(entity_6, entity_5);
}