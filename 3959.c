void fun()
{
  int entity_8 = 28;
  int entity_1 = 43;
  char* entity_9;
  char* entity_2;
  char entity_4[entity_1] = "";
  entity_4 = NULL;
  entity_2 = (char*)malloc(58*sizeof(char));
  entity_2[58-1]='';
  memset(entity_4, 'Y', entity_1-1);
  entity_4[entity_1-1]='';
  entity_9 = (char*)malloc(21*sizeof(char));
  entity_9[21-1]='';
  strcpy(entity_9, entity_4);
}