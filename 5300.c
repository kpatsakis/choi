void fun()
{
  int entity_0 = 78;
  entity_0 = 61;
  char entity_9[7] = "";
  entity_9 = NULL;
  char* entity_1;
  memset(entity_9, 'L', 7-1);
  entity_9[7-1]='';
  entity_1 = (char*)malloc(entity_0*sizeof(char));
  entity_1[entity_0-1]='';
  memcpy(entity_1, entity_9, 7*sizeof(char));
}