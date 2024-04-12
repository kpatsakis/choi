void fun()
{
  int entity_5 = 76;
  int entity_1 = 60;
  char entity_2[60] = "";
  entity_2 = NULL;
  char* entity_4;
  char* entity_9;
  memset(entity_2, 'x', 60-1);
  entity_2[60-1]='';
  entity_4 = (char*)malloc(entity_1*sizeof(char));
  entity_4[entity_1-1]='';
  entity_9 = (char*)malloc(28*sizeof(char));
  entity_9[28-1]='';
  strcpy(entity_4, entity_2);
}