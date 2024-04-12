void fun()
{
  int entity_9 = 6;
  entity_9 = 6;
  char entity_3[entity_9] = "";
  entity_3 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(87*sizeof(char));
  entity_1[87-1]='';
  memset(entity_3, 'Y', entity_9-1);
  entity_3[entity_9-1]='';
  strcpy(entity_1, entity_3);
}