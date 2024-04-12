void fun()
{
  int entity_4 = 46;
  char entity_8 = 'P';
  char entity_1[10] = "";
  entity_1 = NULL;
  char* entity_9;
  memset(entity_1, 'w', 10-1);
  entity_1[10-1]='';
  entity_9 = (char*)malloc(entity_4*sizeof(char));
  entity_9[entity_4-1]='';
  entity_4 = 48;
  strcpy(entity_9, entity_1);
}