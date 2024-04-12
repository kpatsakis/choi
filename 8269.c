void fun()
{
  int entity_2 = 51;
  char entity_8 = 'P';
  char entity_6 = 'i';
  char entity_9[entity_2] = "";
  entity_9 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(20*sizeof(char));
  entity_5[20-1]='';
  memset(entity_9, 'G', entity_2-1);
  entity_9[entity_2-1]='';
  entity_2 = 92;
  strcpy(entity_5, entity_9);
}