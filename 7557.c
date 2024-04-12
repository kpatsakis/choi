void fun()
{
  int entity_1 = 86;
  char* entity_3;
  char* entity_5;
  char* entity_0;
  char entity_9[entity_1] = "";
  entity_9 = NULL;
  memset(entity_9, 'M', entity_1-1);
  entity_9[entity_1-1]='';
  entity_0 = (char*)malloc(34*sizeof(char));
  entity_0[34-1]='';
  entity_5 = (char*)malloc(71*sizeof(char));
  entity_5[71-1]='';
  entity_3 = (char*)malloc(75*sizeof(char));
  entity_3[75-1]='';
  strcpy(entity_3, entity_9);
}