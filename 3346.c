void fun()
{
  int entity_4 = 22;
  entity_4 = 6;
  char* entity_1;
  char entity_2[90] = "";
  entity_2 = NULL;
  char* entity_9;
  memset(entity_2, 'J', 90-1);
  entity_2[90-1]='';
  entity_9 = (char*)malloc(58*sizeof(char));
  entity_9[58-1]='';
  entity_1 = (char*)malloc(entity_4*sizeof(char));
  entity_1[entity_4-1]='';
  strcpy(entity_1, entity_2);
}