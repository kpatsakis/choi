void fun()
{
  char entity_1[38] = "";
  entity_1 = NULL;
  char entity_9[56] = "";
  entity_9 = NULL;
  char* entity_4;
  char entity_5[85] = "";
  entity_5 = NULL;
  memset(entity_9, 'C', 56-1);
  entity_9[56-1]='';
  memset(entity_5, 'F', 85-1);
  entity_5[85-1]='';
  memset(entity_1, 't', 38-1);
  entity_1[38-1]='';
  entity_4 = (char*)malloc(64*sizeof(char));
  entity_4[64-1]='';
  strcpy(entity_4, entity_9);
}