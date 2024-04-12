void fun()
{
  int entity_7 = 65;
  int entity_6 = 52;
  char* entity_4;
  char entity_3[3] = "";
  entity_3 = NULL;
  char entity_9[67] = "";
  entity_9 = NULL;
  entity_4 = (char*)malloc(entity_6*sizeof(char));
  entity_4[entity_6-1]='';
  memset(entity_3, 'I', 3-1);
  entity_3[3-1]='';
  memset(entity_9, 'W', 67-1);
  entity_9[67-1]='';
  strcpy(entity_4, entity_9);
}