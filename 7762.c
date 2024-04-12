void fun()
{
  char* entity_9;
  char entity_3[38] = "";
  entity_3 = NULL;
  char entity_0[20] = "";
  entity_0 = NULL;
  char* entity_8;
  char* entity_6;
  memset(entity_3, 'd', 38-1);
  entity_3[38-1]='';
  entity_9 = (char*)malloc(22*sizeof(char));
  entity_9[22-1]='';
  entity_8 = (char*)malloc(47*sizeof(char));
  entity_8[47-1]='';
  entity_6 = (char*)malloc(39*sizeof(char));
  entity_6[39-1]='';
  memset(entity_0, 'n', 20-1);
  entity_0[20-1]='';
  strcpy(entity_9, entity_3);
}