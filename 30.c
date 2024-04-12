void fun()
{
  int entity_0 = 14;
  int entity_9 = 77;
  entity_9 = 47;
  char* entity_5;
  char entity_2[36] = "";
  entity_2 = NULL;
  entity_5 = (char*)malloc(entity_9*sizeof(char));
  entity_5[entity_9-1]='';
  memset(entity_2, 'E', 36-1);
  entity_2[36-1]='';
  strcpy(entity_5, entity_2);
}