void fun()
{
  int entity_3 = 42;
  char entity_9[59] = "";
  entity_9 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(entity_3*sizeof(char));
  entity_1[entity_3-1]='';
  memset(entity_9, 'T', 59-1);
  entity_9[59-1]='';
  memcpy(entity_1, entity_9, 59*sizeof(char));
}