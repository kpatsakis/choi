void fun()
{
  int entity_2 = 87;
  int entity_0 = 20;
  entity_2 = 77;
  char* entity_9;
  char entity_4[55] = "";
  entity_4 = NULL;
  char entity_5 = 'r';
  memset(entity_4, 'C', 55-1);
  entity_4[55-1]='';
  entity_9 = (char*)malloc(entity_2*sizeof(char));
  entity_9[entity_2-1]='';
  memcpy(entity_9, entity_4, 55*sizeof(char));
}