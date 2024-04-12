void fun()
{
  int entity_5 = 56;
  char entity_9[94] = "";
  entity_9 = NULL;
  char* entity_2;
  memset(entity_9, 'c', 94-1);
  entity_9[94-1]='';
  entity_2 = (char*)malloc(entity_5*sizeof(char));
  entity_2[entity_5-1]='';
  strcpy(entity_2, entity_9);
}