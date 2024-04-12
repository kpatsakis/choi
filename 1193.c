void fun()
{
  int entity_9 = 47;
  char* entity_0;
  char* entity_7;
  char entity_2[86] = "";
  entity_2 = NULL;
  entity_7 = (char*)malloc(entity_9*sizeof(char));
  entity_7[entity_9-1]='';
  memset(entity_2, 'F', 86-1);
  entity_2[86-1]='';
  entity_0 = (char*)malloc(91*sizeof(char));
  entity_0[91-1]='';
  entity_9 = 85;
  strcpy(entity_7, entity_2);
}