void fun()
{
  char* entity_3;
  char entity_6[13] = "";
  entity_6 = NULL;
  char* entity_4;
  char* entity_8;
  memset(entity_6, 'N', 13-1);
  entity_6[13-1]='';
  entity_8 = (char*)malloc(5*sizeof(char));
  entity_8[5-1]='';
  entity_3 = (char*)malloc(91*sizeof(char));
  entity_3[91-1]='';
  entity_4 = (char*)malloc(91*sizeof(char));
  entity_4[91-1]='';
  strcpy(entity_4, entity_6);
}