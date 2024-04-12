void fun()
{
  int entity_9 = 95;
  char* entity_6;
  char entity_5[78] = "";
  entity_5 = NULL;
  memset(entity_5, 'Q', 78-1);
  entity_5[78-1]='';
  entity_6 = (char*)malloc(entity_9*sizeof(char));
  entity_6[entity_9-1]='';
  strcpy(entity_6, entity_5);
}