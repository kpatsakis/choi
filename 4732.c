void fun()
{
  int entity_7 = 50;
  int entity_4 = 53;
  int entity_3 = 1;
  char entity_5[entity_7] = "";
  entity_5 = NULL;
  char entity_8 = 'C';
  char* entity_9;
  memset(entity_5, 'q', entity_7-1);
  entity_5[entity_7-1]='';
  entity_9 = (char*)malloc(40*sizeof(char));
  entity_9[40-1]='';
  strcpy(entity_9, entity_5);
}