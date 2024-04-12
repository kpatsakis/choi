void fun()
{
  int entity_8 = 5;
  char entity_1[entity_8] = "";
  entity_1 = NULL;
  char* entity_4;
  char entity_9 = 'p';
  memset(entity_1, 'W', entity_8-1);
  entity_1[entity_8-1]='';
  entity_4 = (char*)malloc(12*sizeof(char));
  entity_4[12-1]='';
  memcpy(entity_4, entity_1, entity_8*sizeof(char));
}