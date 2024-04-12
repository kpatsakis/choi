void fun()
{
  int entity_1 = 76;
  entity_1 = 81;
  char* entity_9;
  char entity_5[5] = "";
  entity_5 = NULL;
  char* entity_6;
  entity_9 = (char*)malloc(98*sizeof(char));
  entity_9[98-1]='';
  memset(entity_5, 'S', 5-1);
  entity_5[5-1]='';
  entity_6 = (char*)malloc(entity_1*sizeof(char));
  entity_6[entity_1-1]='';
  strcpy(entity_6, entity_5);
}