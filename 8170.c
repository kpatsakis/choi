void fun()
{
  char entity_4[84] = "";
  entity_4 = NULL;
  char* entity_0;
  char* entity_7;
  char* entity_9;
  entity_9 = (char*)malloc(32*sizeof(char));
  entity_9[32-1]='';
  entity_7 = (char*)malloc(72*sizeof(char));
  entity_7[72-1]='';
  memset(entity_4, 'W', 84-1);
  entity_4[84-1]='';
  entity_0 = (char*)malloc(49*sizeof(char));
  entity_0[49-1]='';
  strcpy(entity_9, entity_4);
}