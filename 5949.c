void fun()
{
  int entity_9 = 25;
  char* entity_4;
  char entity_1[entity_9] = "";
  entity_1 = NULL;
  entity_4 = (char*)malloc(57*sizeof(char));
  entity_4[57-1]='';
  memset(entity_1, 's', entity_9-1);
  entity_1[entity_9-1]='';
  strcpy(entity_4, entity_1);
}