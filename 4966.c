void fun()
{
  int entity_0 = 41;
  char* entity_8;
  char entity_9[entity_0] = "";
  entity_9 = NULL;
  char entity_1[27] = "";
  entity_1 = NULL;
  char* entity_3;
  entity_8 = (char*)malloc(37*sizeof(char));
  entity_8[37-1]='';
  entity_3 = (char*)malloc(33*sizeof(char));
  entity_3[33-1]='';
  memset(entity_1, 'V', 27-1);
  entity_1[27-1]='';
  memset(entity_9, 'q', entity_0-1);
  entity_9[entity_0-1]='';
  memcpy(entity_8, entity_9, entity_0*sizeof(char));
}