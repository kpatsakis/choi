void fun()
{
  int entity_9 = 52;
  entity_9 = 85;
  char entity_1[89] = "";
  entity_1 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(entity_9*sizeof(char));
  entity_7[entity_9-1]='';
  memset(entity_1, 'Q', 89-1);
  entity_1[89-1]='';
  strcpy(entity_7, entity_1);
}