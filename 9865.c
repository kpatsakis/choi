void fun()
{
  int entity_0 = 17;
  int entity_9 = 23;
  char entity_2[entity_9] = "";
  entity_2 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(30*sizeof(char));
  entity_3[30-1]='';
  memset(entity_2, 'T', entity_9-1);
  entity_2[entity_9-1]='';
  strcpy(entity_3, entity_2);
}