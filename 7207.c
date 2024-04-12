void fun()
{
  int entity_0 = 21;
  char* entity_2;
  char entity_1[57] = "";
  entity_1 = NULL;
  char entity_9[entity_0] = "";
  entity_9 = NULL;
  char* entity_4;
  memset(entity_9, 'L', entity_0-1);
  entity_9[entity_0-1]='';
  entity_2 = (char*)malloc(70*sizeof(char));
  entity_2[70-1]='';
  entity_4 = (char*)malloc(55*sizeof(char));
  entity_4[55-1]='';
  memset(entity_1, 'q', 57-1);
  entity_1[57-1]='';
  strcpy(entity_4, entity_9);
}