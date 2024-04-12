void fun()
{
  int entity_7 = 74;
  char entity_1[68] = "";
  entity_1 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(entity_7*sizeof(char));
  entity_9[entity_7-1]='';
  memset(entity_1, 'p', 68-1);
  entity_1[68-1]='';
  entity_7 = 55;
  strcpy(entity_9, entity_1);
}