void fun()
{
  int entity_4 = 48;
  int entity_1 = 26;
  char* entity_6;
  char entity_5[3] = "";
  entity_5 = NULL;
  char* entity_9;
  entity_6 = (char*)malloc(entity_1*sizeof(char));
  entity_6[entity_1-1]='';
  memset(entity_5, 'V', 3-1);
  entity_5[3-1]='';
  entity_9 = (char*)malloc(55*sizeof(char));
  entity_9[55-1]='';
  memcpy(entity_6, entity_5, 3*sizeof(char));
}