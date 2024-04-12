void fun()
{
  char entity_8[44] = "";
  entity_8 = NULL;
  char* entity_1;
  char* entity_3;
  entity_3 = (char*)malloc(36*sizeof(char));
  entity_3[36-1]='';
  memset(entity_8, 'I', 44-1);
  entity_8[44-1]='';
  entity_1 = (char*)malloc(8*sizeof(char));
  entity_1[8-1]='';
  strcpy(entity_3, entity_8);
}