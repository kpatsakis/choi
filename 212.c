void fun()
{
  int entity_6 = 29;
  int entity_2 = 5;
  char* entity_1;
  char entity_7[9] = "";
  entity_7 = NULL;
  char* entity_5;
  memset(entity_7, 'q', 9-1);
  entity_7[9-1]='';
  entity_1 = (char*)malloc(entity_2*sizeof(char));
  entity_1[entity_2-1]='';
  entity_5 = (char*)malloc(75*sizeof(char));
  entity_5[75-1]='';
  strcpy(entity_1, entity_7);
}