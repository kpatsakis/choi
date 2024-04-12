void fun()
{
  int entity_3 = 26;
  char entity_9[54] = "";
  entity_9 = NULL;
  char entity_6[59] = "";
  entity_6 = NULL;
  char* entity_7;
  memset(entity_6, 'L', 59-1);
  entity_6[59-1]='';
  memset(entity_9, 'I', 54-1);
  entity_9[54-1]='';
  entity_7 = (char*)malloc(entity_3*sizeof(char));
  entity_7[entity_3-1]='';
  memcpy(entity_7, entity_6, 59*sizeof(char));
}