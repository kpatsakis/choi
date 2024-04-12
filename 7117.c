void fun()
{
  char* entity_9;
  char entity_3[23] = "";
  entity_3 = NULL;
  char* entity_5;
  entity_9 = (char*)malloc(50*sizeof(char));
  entity_9[50-1]='';
  entity_5 = (char*)malloc(59*sizeof(char));
  entity_5[59-1]='';
  memset(entity_3, 'q', 23-1);
  entity_3[23-1]='';
  strcpy(entity_5, entity_3);
}