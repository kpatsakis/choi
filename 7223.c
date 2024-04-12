void fun()
{
  int entity_9 = 18;
  int entity_1 = 33;
  entity_9 = 18;
  char* entity_5;
  char entity_4[entity_9] = "";
  entity_4 = NULL;
  char* entity_3;
  memset(entity_4, 'y', entity_9-1);
  entity_4[entity_9-1]='';
  entity_3 = (char*)malloc(88*sizeof(char));
  entity_3[88-1]='';
  entity_5 = (char*)malloc(14*sizeof(char));
  entity_5[14-1]='';
  strcpy(entity_3, entity_4);
}