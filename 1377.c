void fun()
{
  int entity_0 = 20;
  char entity_9[1] = "";
  entity_9 = NULL;
  char* entity_1;
  memset(entity_9, 'B', 1-1);
  entity_9[1-1]='';
  entity_1 = (char*)malloc(entity_0*sizeof(char));
  entity_1[entity_0-1]='';
  entity_0 = 33;
  memcpy(entity_1, entity_9, 1*sizeof(char));
}