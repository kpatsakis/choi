void fun()
{
  int entity_9 = 85;
  char* entity_6;
  char entity_2[entity_9] = "";
  entity_2 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(44*sizeof(char));
  entity_7[44-1]='';
  entity_6 = (char*)malloc(93*sizeof(char));
  entity_6[93-1]='';
  memset(entity_2, 'e', entity_9-1);
  entity_2[entity_9-1]='';
  strcpy(entity_7, entity_2);
}