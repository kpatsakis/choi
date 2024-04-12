void fun()
{
  int entity_6 = 54;
  int entity_5 = 43;
  char entity_8[76] = "";
  entity_8 = NULL;
  char entity_9 = 'B';
  char* entity_1;
  char entity_7[entity_6] = "";
  entity_7 = NULL;
  entity_1 = (char*)malloc(1*sizeof(char));
  entity_1[1-1]='';
  memset(entity_8, 'W', 76-1);
  entity_8[76-1]='';
  memset(entity_7, 'I', entity_6-1);
  entity_7[entity_6-1]='';
  memcpy(entity_1, entity_7, entity_6*sizeof(char));
}