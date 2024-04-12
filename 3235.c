void fun()
{
  int entity_9 = 15;
  char* entity_5;
  char entity_2[89] = "";
  entity_2 = NULL;
  entity_5 = (char*)malloc(entity_9*sizeof(char));
  entity_5[entity_9-1]='';
  memset(entity_2, 'G', 89-1);
  entity_2[89-1]='';
  entity_9 = 19;
  strcpy(entity_5, entity_2);
}