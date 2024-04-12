void fun()
{
  char* entity_8;
  char* entity_0;
  char entity_3[46] = "";
  entity_3 = NULL;
  char entity_9[65] = "";
  entity_9 = NULL;
  char entity_5 = 'X';
  entity_0 = (char*)malloc(33*sizeof(char));
  entity_0[33-1]='';
  memset(entity_3, 'F', 46-1);
  entity_3[46-1]='';
  entity_8 = (char*)malloc(39*sizeof(char));
  entity_8[39-1]='';
  memset(entity_9, 'D', 65-1);
  entity_9[65-1]='';
  memcpy(entity_8, entity_3, 46*sizeof(char));
}