void fun()
{
  int entity_7 = 19;
  char entity_3[94] = "";
  entity_3 = NULL;
  char entity_1[55] = "";
  entity_1 = NULL;
  char* entity_6;
  char entity_9[entity_7] = "";
  entity_9 = NULL;
  memset(entity_3, 'j', 94-1);
  entity_3[94-1]='';
  memset(entity_1, 'a', 55-1);
  entity_1[55-1]='';
  entity_6 = (char*)malloc(41*sizeof(char));
  entity_6[41-1]='';
  memset(entity_9, 'M', entity_7-1);
  entity_9[entity_7-1]='';
  entity_7 = 57;
  memcpy(entity_6, entity_9, entity_7*sizeof(char));
}