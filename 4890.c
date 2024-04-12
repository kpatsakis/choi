void fun()
{
  int entity_1 = 81;
  char* entity_9;
  char entity_4[50] = "";
  entity_4 = NULL;
  entity_9 = (char*)malloc(entity_1*sizeof(char));
  entity_9[entity_1-1]='';
  memset(entity_4, 'U', 50-1);
  entity_4[50-1]='';
  memcpy(entity_9, entity_4, 50*sizeof(char));
}