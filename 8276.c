void fun()
{
  int entity_9 = 48;
  char* entity_1;
  char entity_6[entity_9] = "";
  entity_6 = NULL;
  entity_1 = (char*)malloc(40*sizeof(char));
  entity_1[40-1]='';
  memset(entity_6, 'A', entity_9-1);
  entity_6[entity_9-1]='';
  strcpy(entity_1, entity_6);
}