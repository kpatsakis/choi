void fun()
{
  int entity_0 = 64;
  char* entity_1;
  char entity_9[42] = "";
  entity_9 = NULL;
  char* entity_6;
  char* entity_4;
  entity_4 = (char*)malloc(59*sizeof(char));
  entity_4[59-1]='';
  entity_1 = (char*)malloc(entity_0*sizeof(char));
  entity_1[entity_0-1]='';
  entity_6 = (char*)malloc(19*sizeof(char));
  entity_6[19-1]='';
  memset(entity_9, 'm', 42-1);
  entity_9[42-1]='';
  memcpy(entity_1, entity_9, 42*sizeof(char));
}