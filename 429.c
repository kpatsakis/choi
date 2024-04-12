void fun()
{
  int entity_2 = 2;
  char entity_9[63] = "";
  entity_9 = NULL;
  char* entity_1;
  memset(entity_9, 'H', 63-1);
  entity_9[63-1]='';
  entity_1 = (char*)malloc(entity_2*sizeof(char));
  entity_1[entity_2-1]='';
  strcpy(entity_1, entity_9);
}