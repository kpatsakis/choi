void fun()
{
  int entity_2 = 91;
  entity_2 = 91;
  char* entity_9;
  char entity_4[entity_2] = "";
  entity_4 = NULL;
  memset(entity_4, 'o', entity_2-1);
  entity_4[entity_2-1]='';
  entity_9 = (char*)malloc(8*sizeof(char));
  entity_9[8-1]='';
  strcpy(entity_9, entity_4);
}