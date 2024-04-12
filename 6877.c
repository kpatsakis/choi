void fun()
{
  int entity_6 = 19;
  int entity_4 = 19;
  int entity_1 = 70;
  char entity_3 = 'l';
  char entity_5[23] = "";
  entity_5 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(entity_6*sizeof(char));
  entity_9[entity_6-1]='';
  memset(entity_5, 'F', 23-1);
  entity_5[23-1]='';
  memcpy(entity_9, entity_5, 23*sizeof(char));
}