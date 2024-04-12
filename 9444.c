void fun()
{
  int entity_7 = 32;
  char* entity_2;
  char entity_3[54] = "";
  entity_3 = NULL;
  char entity_9[entity_7] = "";
  entity_9 = NULL;
  char entity_0 = 'w';
  char* entity_4;
  entity_4 = (char*)malloc(87*sizeof(char));
  entity_4[87-1]='';
  memset(entity_3, 'B', 54-1);
  entity_3[54-1]='';
  memset(entity_9, 'V', entity_7-1);
  entity_9[entity_7-1]='';
  entity_2 = (char*)malloc(37*sizeof(char));
  entity_2[37-1]='';
  memcpy(entity_4, entity_9, entity_7*sizeof(char));
}