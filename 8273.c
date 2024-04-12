void fun()
{
  int entity_3 = 78;
  int entity_8 = 87;
  int entity_4 = 71;
  char* entity_5;
  char* entity_6;
  char entity_9[65] = "";
  entity_9 = NULL;
  entity_5 = (char*)malloc(entity_3*sizeof(char));
  entity_5[entity_3-1]='';
  memset(entity_9, 'v', 65-1);
  entity_9[65-1]='';
  entity_6 = (char*)malloc(16*sizeof(char));
  entity_6[16-1]='';
  entity_3 = 16;
  memcpy(entity_5, entity_9, 65*sizeof(char));
}