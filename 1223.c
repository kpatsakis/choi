void fun()
{
  int entity_9 = 81;
  char entity_6[entity_9] = "";
  entity_6 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(94*sizeof(char));
  entity_2[94-1]='';
  memset(entity_6, 't', entity_9-1);
  entity_6[entity_9-1]='';
  strcpy(entity_2, entity_6);
}