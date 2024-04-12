void fun()
{
  int entity_2 = 71;
  char entity_5[entity_2] = "";
  entity_5 = NULL;
  char entity_3 = 'R';
  char* entity_9;
  memset(entity_5, 'R', entity_2-1);
  entity_5[entity_2-1]='';
  entity_9 = (char*)malloc(82*sizeof(char));
  entity_9[82-1]='';
  strcpy(entity_9, entity_5);
}