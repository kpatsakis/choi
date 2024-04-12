void fun()
{
  int entity_5 = 81;
  int entity_8 = 58;
  char* entity_4;
  char* entity_9;
  char entity_2[entity_8] = "";
  entity_2 = NULL;
  entity_9 = (char*)malloc(71*sizeof(char));
  entity_9[71-1]='';
  entity_4 = (char*)malloc(88*sizeof(char));
  entity_4[88-1]='';
  memset(entity_2, 'M', entity_8-1);
  entity_2[entity_8-1]='';
  strcpy(entity_9, entity_2);
}