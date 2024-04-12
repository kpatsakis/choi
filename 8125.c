void fun()
{
  int entity_8 = 81;
  char entity_1[27] = "";
  entity_1 = NULL;
  char entity_4[56] = "";
  entity_4 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(entity_8*sizeof(char));
  entity_9[entity_8-1]='';
  memset(entity_1, 'w', 27-1);
  entity_1[27-1]='';
  memset(entity_4, 'h', 56-1);
  entity_4[56-1]='';
  memcpy(entity_9, entity_4, 56*sizeof(char));
}