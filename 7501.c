void fun()
{
  char entity_3[24] = "";
  entity_3 = NULL;
  char* entity_8;
  char* entity_7;
  char entity_4[91] = "";
  entity_4 = NULL;
  char* entity_6;
  entity_7 = (char*)malloc(9*sizeof(char));
  entity_7[9-1]='';
  memset(entity_4, 'a', 91-1);
  entity_4[91-1]='';
  entity_6 = (char*)malloc(32*sizeof(char));
  entity_6[32-1]='';
  memset(entity_3, 'n', 24-1);
  entity_3[24-1]='';
  entity_8 = (char*)malloc(79*sizeof(char));
  entity_8[79-1]='';
  strcpy(entity_7, entity_4);
}