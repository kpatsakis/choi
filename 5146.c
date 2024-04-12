void fun()
{
  int entity_6 = 37;
  char* entity_0;
  char* entity_9;
  char entity_7[34] = "";
  entity_7 = NULL;
  char entity_1[55] = "";
  entity_1 = NULL;
  entity_0 = (char*)malloc(entity_6*sizeof(char));
  entity_0[entity_6-1]='';
  memset(entity_1, 'b', 55-1);
  entity_1[55-1]='';
  entity_9 = (char*)malloc(59*sizeof(char));
  entity_9[59-1]='';
  memset(entity_7, 'X', 34-1);
  entity_7[34-1]='';
  entity_6 = 78;
  memcpy(entity_0, entity_1, 55*sizeof(char));
}