void fun()
{
  int entity_7 = 17;
  int entity_8 = 73;
  entity_7 = 40;
  char entity_9[6] = "";
  entity_9 = NULL;
  char entity_1[18] = "";
  entity_1 = NULL;
  char* entity_6;
  char entity_4 = 'e';
  memset(entity_9, 'M', 6-1);
  entity_9[6-1]='';
  entity_6 = (char*)malloc(entity_7*sizeof(char));
  entity_6[entity_7-1]='';
  memset(entity_1, 'I', 18-1);
  entity_1[18-1]='';
  strcpy(entity_6, entity_9);
}