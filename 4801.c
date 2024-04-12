void fun()
{
  int entity_0 = 25;
  char entity_2[5] = "";
  entity_2 = NULL;
  char* entity_9;
  memset(entity_2, 'y', 5-1);
  entity_2[5-1]='';
  entity_9 = (char*)malloc(entity_0*sizeof(char));
  entity_9[entity_0-1]='';
  strcpy(entity_9, entity_2);
}