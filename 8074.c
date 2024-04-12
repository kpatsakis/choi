void fun()
{
  int entity_9 = 2;
  int entity_4 = 80;
  char entity_2[55] = "";
  entity_2 = NULL;
  char* entity_5;
  char* entity_6;
  entity_6 = (char*)malloc(28*sizeof(char));
  entity_6[28-1]='';
  entity_5 = (char*)malloc(entity_4*sizeof(char));
  entity_5[entity_4-1]='';
  memset(entity_2, 'P', 55-1);
  entity_2[55-1]='';
  strcpy(entity_5, entity_2);
}