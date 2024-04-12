void fun()
{
  int entity_8 = 19;
  entity_8 = 42;
  char entity_9[32] = "";
  entity_9 = NULL;
  char* entity_1;
  char* entity_6;
  entity_6 = (char*)malloc(27*sizeof(char));
  entity_6[27-1]='';
  entity_1 = (char*)malloc(entity_8*sizeof(char));
  entity_1[entity_8-1]='';
  memset(entity_9, 'Z', 32-1);
  entity_9[32-1]='';
  memcpy(entity_1, entity_9, 32*sizeof(char));
}