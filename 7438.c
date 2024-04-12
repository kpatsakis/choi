void fun()
{
  int entity_1 = 52;
  char* entity_2;
  char entity_9[50] = "";
  entity_9 = NULL;
  entity_2 = (char*)malloc(entity_1*sizeof(char));
  entity_2[entity_1-1]='';
  memset(entity_9, 'p', 50-1);
  entity_9[50-1]='';
  strcpy(entity_2, entity_9);
}