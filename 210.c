void fun()
{
  int entity_5 = 57;
  entity_5 = 56;
  char* entity_8;
  char* entity_2;
  char* entity_1;
  char entity_9[49] = "";
  entity_9 = NULL;
  entity_1 = (char*)malloc(70*sizeof(char));
  entity_1[70-1]='';
  memset(entity_9, 'U', 49-1);
  entity_9[49-1]='';
  entity_2 = (char*)malloc(91*sizeof(char));
  entity_2[91-1]='';
  entity_8 = (char*)malloc(entity_5*sizeof(char));
  entity_8[entity_5-1]='';
  memcpy(entity_8, entity_9, 49*sizeof(char));
}