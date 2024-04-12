void fun()
{
  char* entity_4;
  char* entity_6;
  char entity_5[91] = "";
  entity_5 = NULL;
  entity_6 = (char*)malloc(95*sizeof(char));
  entity_6[95-1]='';
  entity_4 = (char*)malloc(32*sizeof(char));
  entity_4[32-1]='';
  memset(entity_5, 'S', 91-1);
  entity_5[91-1]='';
  strcpy(entity_4, entity_5);
}