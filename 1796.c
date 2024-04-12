void fun()
{
  int entity_3 = 68;
  char entity_8[21] = "";
  entity_8 = NULL;
  char entity_7[38] = "";
  entity_7 = NULL;
  char entity_1[entity_3] = "";
  entity_1 = NULL;
  char* entity_2;
  char* entity_5;
  memset(entity_8, 't', 21-1);
  entity_8[21-1]='';
  entity_2 = (char*)malloc(68*sizeof(char));
  entity_2[68-1]='';
  memset(entity_7, 'm', 38-1);
  entity_7[38-1]='';
  memset(entity_1, 's', entity_3-1);
  entity_1[entity_3-1]='';
  entity_5 = (char*)malloc(85*sizeof(char));
  entity_5[85-1]='';
  strcpy(entity_2, entity_1);
}