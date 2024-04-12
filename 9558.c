void fun()
{
  int entity_5 = 81;
  int entity_6 = 84;
  entity_5 = 16;
  char entity_4[entity_5] = "";
  entity_4 = NULL;
  char entity_9[23] = "";
  entity_9 = NULL;
  char* entity_3;
  memset(entity_9, 'x', 23-1);
  entity_9[23-1]='';
  memset(entity_4, 'E', entity_5-1);
  entity_4[entity_5-1]='';
  entity_3 = (char*)malloc(48*sizeof(char));
  entity_3[48-1]='';
  memcpy(entity_3, entity_4, entity_5*sizeof(char));
}