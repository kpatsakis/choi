void fun()
{
  int entity_9 = 1;
  entity_9 = 41;
  char entity_8[entity_9] = "";
  entity_8 = NULL;
  char* entity_1;
  char entity_3[23] = "";
  entity_3 = NULL;
  char* entity_6;
  entity_1 = (char*)malloc(16*sizeof(char));
  entity_1[16-1]='';
  memset(entity_3, 'Y', 23-1);
  entity_3[23-1]='';
  entity_6 = (char*)malloc(7*sizeof(char));
  entity_6[7-1]='';
  memset(entity_8, 'G', entity_9-1);
  entity_8[entity_9-1]='';
  memcpy(entity_6, entity_8, entity_9*sizeof(char));
}