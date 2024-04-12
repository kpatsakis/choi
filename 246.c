void fun()
{
  int entity_3 = 63;
  char entity_5[85] = "";
  entity_5 = NULL;
  char* entity_9;
  char entity_4[entity_3] = "";
  entity_4 = NULL;
  entity_9 = (char*)malloc(24*sizeof(char));
  entity_9[24-1]='';
  memset(entity_5, 'q', 85-1);
  entity_5[85-1]='';
  memset(entity_4, 'C', entity_3-1);
  entity_4[entity_3-1]='';
  memcpy(entity_9, entity_4, entity_3*sizeof(char));
}