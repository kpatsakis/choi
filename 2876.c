void fun()
{
  int entity_6 = 69;
  char entity_3[79] = "";
  entity_3 = NULL;
  char entity_7[24] = "";
  entity_7 = NULL;
  char* entity_9;
  memset(entity_3, 'v', 79-1);
  entity_3[79-1]='';
  entity_9 = (char*)malloc(entity_6*sizeof(char));
  entity_9[entity_6-1]='';
  memset(entity_7, 'P', 24-1);
  entity_7[24-1]='';
  memcpy(entity_9, entity_3, 79*sizeof(char));
}