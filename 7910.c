void fun()
{
  int entity_1 = 66;
  char entity_9[entity_1] = "";
  entity_9 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(31*sizeof(char));
  entity_2[31-1]='';
  memset(entity_9, 'A', entity_1-1);
  entity_9[entity_1-1]='';
  entity_1 = 32;
  strcpy(entity_2, entity_9);
}