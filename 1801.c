void fun()
{
  int entity_1 = 59;
  char* entity_3;
  char entity_9[73] = "";
  entity_9 = NULL;
  entity_3 = (char*)malloc(entity_1*sizeof(char));
  entity_3[entity_1-1]='';
  memset(entity_9, 'b', 73-1);
  entity_9[73-1]='';
  strcpy(entity_3, entity_9);
}