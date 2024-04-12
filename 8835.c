void fun()
{
  int entity_2 = 60;
  char entity_9[entity_2] = "";
  entity_9 = NULL;
  char* entity_5;
  memset(entity_9, 'n', entity_2-1);
  entity_9[entity_2-1]='';
  entity_5 = (char*)malloc(35*sizeof(char));
  entity_5[35-1]='';
  entity_2 = 38;
  entity_9[91] = 'P';
}