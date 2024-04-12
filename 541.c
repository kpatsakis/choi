void fun()
{
  int entity_7 = 2;
  char* entity_9;
  char entity_2[59] = "";
  entity_2 = NULL;
  entity_9 = (char*)malloc(entity_7*sizeof(char));
  entity_9[entity_7-1]='';
  memset(entity_2, 'n', 59-1);
  entity_2[59-1]='';
  entity_7 = 94;
  strcpy(entity_9, entity_2);
}