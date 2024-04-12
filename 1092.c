void fun()
{
  int entity_8 = 91;
  int entity_7 = 72;
  int entity_0 = 51;
  entity_8 = 94;
  char* entity_3;
  char entity_5[entity_8] = "";
  entity_5 = NULL;
  char* entity_9;
  entity_3 = (char*)malloc(51*sizeof(char));
  entity_3[51-1]='';
  entity_9 = (char*)malloc(23*sizeof(char));
  entity_9[23-1]='';
  memset(entity_5, 'F', entity_8-1);
  entity_5[entity_8-1]='';
  memcpy(entity_9, entity_5, entity_8*sizeof(char));
}