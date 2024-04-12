void fun()
{
  int entity_1 = 95;
  entity_1 = 9;
  char entity_3[55] = "";
  entity_3 = NULL;
  char* entity_9;
  char entity_0 = 'Z';
  entity_9 = (char*)malloc(entity_1*sizeof(char));
  entity_9[entity_1-1]='';
  memset(entity_3, 'E', 55-1);
  entity_3[55-1]='';
  memcpy(entity_9, entity_3, 55*sizeof(char));
}