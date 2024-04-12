void fun()
{
  int entity_6 = 14;
  char entity_5 = 'M';
  char entity_4[entity_6] = "";
  entity_4 = NULL;
  char entity_1 = 'x';
  char* entity_2;
  char* entity_9;
  entity_2 = (char*)malloc(51*sizeof(char));
  entity_2[51-1]='';
  memset(entity_4, 'R', entity_6-1);
  entity_4[entity_6-1]='';
  entity_9 = (char*)malloc(96*sizeof(char));
  entity_9[96-1]='';
  entity_6 = 19;
  strcpy(entity_9, entity_4);
}