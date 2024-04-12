void fun()
{
  int entity_9 = 43;
  char* entity_3;
  char entity_4[entity_9] = "";
  entity_4 = NULL;
  char entity_2 = 'H';
  memset(entity_4, 'k', entity_9-1);
  entity_4[entity_9-1]='';
  entity_3 = (char*)malloc(55*sizeof(char));
  entity_3[55-1]='';
  memcpy(entity_3, entity_4, entity_9*sizeof(char));
}