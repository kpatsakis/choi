void fun()
{
  int entity_5 = 11;
  int entity_8 = 74;
  char* entity_0;
  char entity_6 = 'Q';
  char* entity_7;
  char entity_9[43] = "";
  entity_9 = NULL;
  memset(entity_9, 'S', 43-1);
  entity_9[43-1]='';
  entity_0 = (char*)malloc(64*sizeof(char));
  entity_0[64-1]='';
  entity_7 = (char*)malloc(entity_8*sizeof(char));
  entity_7[entity_8-1]='';
  memcpy(entity_7, entity_9, 43*sizeof(char));
}