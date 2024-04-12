void fun()
{
  int entity_5 = 54;
  char* entity_4;
  char* entity_0;
  char entity_9[entity_5] = "";
  entity_9 = NULL;
  char entity_8 = 'J';
  char* entity_7;
  entity_4 = (char*)malloc(90*sizeof(char));
  entity_4[90-1]='';
  entity_0 = (char*)malloc(49*sizeof(char));
  entity_0[49-1]='';
  memset(entity_9, 'f', entity_5-1);
  entity_9[entity_5-1]='';
  entity_7 = (char*)malloc(26*sizeof(char));
  entity_7[26-1]='';
  memcpy(entity_7, entity_9, entity_5*sizeof(char));
}