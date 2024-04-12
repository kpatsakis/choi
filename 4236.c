void fun()
{
  int entity_1 = 3;
  entity_1 = 76;
  char entity_9[91] = "";
  entity_9 = NULL;
  char* entity_8;
  char* entity_4;
  entity_4 = (char*)malloc(0*sizeof(char));
  entity_4[0-1]='';
  memset(entity_9, 'S', 91-1);
  entity_9[91-1]='';
  entity_8 = (char*)malloc(entity_1*sizeof(char));
  entity_8[entity_1-1]='';
  memcpy(entity_8, entity_9, 91*sizeof(char));
}