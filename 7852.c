void fun()
{
  int entity_6 = 59;
  char entity_5[15] = "";
  entity_5 = NULL;
  char* entity_9;
  char* entity_2;
  entity_2 = (char*)malloc(entity_6*sizeof(char));
  entity_2[entity_6-1]='';
  entity_9 = (char*)malloc(93*sizeof(char));
  entity_9[93-1]='';
  memset(entity_5, 'y', 15-1);
  entity_5[15-1]='';
  entity_6 = 56;
  strcpy(entity_2, entity_5);
}