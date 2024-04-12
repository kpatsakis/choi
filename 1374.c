void fun()
{
  int entity_2 = 89;
  int entity_9 = 38;
  entity_2 = 29;
  char* entity_1;
  char entity_0[entity_2] = "";
  entity_0 = NULL;
  entity_1 = (char*)malloc(28*sizeof(char));
  entity_1[28-1]='';
  memset(entity_0, 'O', entity_2-1);
  entity_0[entity_2-1]='';
  memcpy(entity_1, entity_0, entity_2*sizeof(char));
}