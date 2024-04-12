void fun()
{
  int entity_4 = 8;
  int entity_9 = 22;
  char* entity_1;
  char entity_6[44] = "";
  entity_6 = NULL;
  char entity_7[entity_4] = "";
  entity_7 = NULL;
  entity_1 = (char*)malloc(24*sizeof(char));
  entity_1[24-1]='';
  memset(entity_7, 'P', entity_4-1);
  entity_7[entity_4-1]='';
  memset(entity_6, 'I', 44-1);
  entity_6[44-1]='';
  memcpy(entity_1, entity_7, entity_4*sizeof(char));
}