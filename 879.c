void fun()
{
  int entity_2 = 5;
  char* entity_1;
  char entity_7[93] = "";
  entity_7 = NULL;
  char entity_9 = 'c';
  entity_1 = (char*)malloc(entity_2*sizeof(char));
  entity_1[entity_2-1]='';
  memset(entity_7, 'F', 93-1);
  entity_7[93-1]='';
  strcpy(entity_1, entity_7);
}