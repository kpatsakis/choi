void fun()
{
  int entity_1 = 85;
  char entity_3[94] = "";
  entity_3 = NULL;
  char* entity_9;
  char entity_6 = 'c';
  char entity_4[13] = "";
  entity_4 = NULL;
  memset(entity_3, 'c', 94-1);
  entity_3[94-1]='';
  memset(entity_4, 'g', 13-1);
  entity_4[13-1]='';
  entity_9 = (char*)malloc(entity_1*sizeof(char));
  entity_9[entity_1-1]='';
  entity_1 = 67;
  strcpy(entity_9, entity_4);
}