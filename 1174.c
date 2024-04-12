void fun()
{
  char entity_4[64] = "";
  entity_4 = NULL;
  char* entity_0;
  char* entity_5;
  char* entity_6;
  memset(entity_4, 'm', 64-1);
  entity_4[64-1]='';
  entity_0 = (char*)malloc(21*sizeof(char));
  entity_0[21-1]='';
  entity_5 = (char*)malloc(62*sizeof(char));
  entity_5[62-1]='';
  entity_6 = (char*)malloc(24*sizeof(char));
  entity_6[24-1]='';
  strcpy(entity_6, entity_4);
}