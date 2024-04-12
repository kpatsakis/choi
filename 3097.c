void fun()
{
  int entity_4 = 30;
  char entity_1[entity_4] = "";
  entity_1 = NULL;
  char* entity_9;
  memset(entity_1, 'A', entity_4-1);
  entity_1[entity_4-1]='';
  entity_9 = (char*)malloc(5*sizeof(char));
  entity_9[5-1]='';
  memcpy(entity_9, entity_1, entity_4*sizeof(char));
}