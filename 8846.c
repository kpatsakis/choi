void fun()
{
  int entity_1 = 38;
  char entity_6 = 'b';
  char entity_4[44] = "";
  entity_4 = NULL;
  char entity_5[80] = "";
  entity_5 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(entity_1*sizeof(char));
  entity_9[entity_1-1]='';
  memset(entity_4, 'K', 44-1);
  entity_4[44-1]='';
  memset(entity_5, 'T', 80-1);
  entity_5[80-1]='';
  memcpy(entity_9, entity_4, 44*sizeof(char));
}