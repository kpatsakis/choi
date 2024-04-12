void fun()
{
  int entity_2 = 32;
  entity_2 = 32;
  char entity_3 = 'D';
  char entity_5[entity_2] = "";
  entity_5 = NULL;
  char* entity_9;
  memset(entity_5, 'p', entity_2-1);
  entity_5[entity_2-1]='';
  entity_9 = (char*)malloc(12*sizeof(char));
  entity_9[12-1]='';
  strcpy(entity_9, entity_5);
}