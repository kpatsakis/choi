void fun()
{
  int entity_4 = 95;
  int entity_3 = 83;
  int entity_5 = 2;
  int entity_1 = 54;
  char entity_9[entity_1] = "";
  entity_9 = NULL;
  char* entity_0;
  memset(entity_9, 'A', entity_1-1);
  entity_9[entity_1-1]='';
  entity_0 = (char*)malloc(65*sizeof(char));
  entity_0[65-1]='';
  memcpy(entity_0, entity_9, entity_1*sizeof(char));
}