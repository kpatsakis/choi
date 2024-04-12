void fun()
{
  int entity_2 = 87;
  char* entity_9;
  char entity_5 = 'w';
  char entity_0[10] = "";
  entity_0 = NULL;
  char entity_7[entity_2] = "";
  entity_7 = NULL;
  char* entity_6;
  memset(entity_0, 'M', 10-1);
  entity_0[10-1]='';
  entity_6 = (char*)malloc(83*sizeof(char));
  entity_6[83-1]='';
  memset(entity_7, 'P', entity_2-1);
  entity_7[entity_2-1]='';
  entity_9 = (char*)malloc(10*sizeof(char));
  entity_9[10-1]='';
  memcpy(entity_6, entity_7, entity_2*sizeof(char));
}