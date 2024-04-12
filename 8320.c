void fun()
{
  int entity_6 = 18;
  char entity_3[46] = "";
  entity_3 = NULL;
  char entity_9[83] = "";
  entity_9 = NULL;
  char* entity_1;
  memset(entity_9, 'A', 83-1);
  entity_9[83-1]='';
  memset(entity_3, 'm', 46-1);
  entity_3[46-1]='';
  entity_1 = (char*)malloc(entity_6*sizeof(char));
  entity_1[entity_6-1]='';
  memcpy(entity_1, entity_9, 83*sizeof(char));
}