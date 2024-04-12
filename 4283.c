void fun()
{
  int entity_4 = 26;
  char entity_9 = 'c';
  char* entity_6;
  char entity_1[17] = "";
  entity_1 = NULL;
  entity_6 = (char*)malloc(entity_4*sizeof(char));
  entity_6[entity_4-1]='';
  memset(entity_1, 'P', 17-1);
  entity_1[17-1]='';
  entity_4 = 44;
  strcpy(entity_6, entity_1);
}