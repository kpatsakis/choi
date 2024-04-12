void fun()
{
  char* entity_1;
  char* entity_0;
  char entity_7[39] = "";
  entity_7 = NULL;
  char* entity_9;
  memset(entity_7, 'v', 39-1);
  entity_7[39-1]='';
  entity_0 = (char*)malloc(64*sizeof(char));
  entity_0[64-1]='';
  entity_9 = (char*)malloc(71*sizeof(char));
  entity_9[71-1]='';
  entity_1 = (char*)malloc(90*sizeof(char));
  entity_1[90-1]='';
  strcpy(entity_9, entity_7);
}