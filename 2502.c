void fun()
{
  int entity_6 = 17;
  entity_6 = 43;
  char entity_9[entity_6] = "";
  entity_9 = NULL;
  char* entity_2;
  memset(entity_9, 'n', entity_6-1);
  entity_9[entity_6-1]='';
  entity_2 = (char*)malloc(20*sizeof(char));
  entity_2[20-1]='';
  memcpy(entity_2, entity_9, entity_6*sizeof(char));
}