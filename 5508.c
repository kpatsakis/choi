void fun()
{
  char* entity_9;
  char entity_7[96] = "";
  entity_7 = NULL;
  char* entity_1;
  memset(entity_7, 'F', 96-1);
  entity_7[96-1]='';
  entity_1 = (char*)malloc(53*sizeof(char));
  entity_1[53-1]='';
  entity_9 = (char*)malloc(32*sizeof(char));
  entity_9[32-1]='';
  strcpy(entity_9, entity_7);
}