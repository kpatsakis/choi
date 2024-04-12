void fun()
{
  int entity_9 = 18;
  entity_9 = 18;
  char entity_2[entity_9] = "";
  entity_2 = NULL;
  char* entity_3;
  memset(entity_2, 'G', entity_9-1);
  entity_2[entity_9-1]='';
  entity_3 = (char*)malloc(15*sizeof(char));
  entity_3[15-1]='';
  strcpy(entity_3, entity_2);
}