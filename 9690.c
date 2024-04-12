void fun()
{
  int entity_8 = 67;
  char* entity_9;
  char entity_1[55] = "";
  entity_1 = NULL;
  entity_9 = (char*)malloc(75*sizeof(char));
  entity_9[75-1]='';
  memset(entity_1, 'v', 55-1);
  entity_1[55-1]='';
  memcpy(entity_9, entity_1, 55*sizeof(char));
}