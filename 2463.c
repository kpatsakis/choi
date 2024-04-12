void fun()
{
  int entity_4 = 51;
  int entity_9 = 27;
  int entity_3 = 12;
  char entity_1[93] = "";
  entity_1 = NULL;
  char* entity_7;
  memset(entity_1, 'M', 93-1);
  entity_1[93-1]='';
  entity_7 = (char*)malloc(entity_9*sizeof(char));
  entity_7[entity_9-1]='';
  strcpy(entity_7, entity_1);
}