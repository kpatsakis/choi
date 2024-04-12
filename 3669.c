void fun()
{
  int entity_8 = 47;
  char entity_4 = 'Q';
  char* entity_3;
  char* entity_5;
  char entity_1[entity_8] = "";
  entity_1 = NULL;
  memset(entity_1, 'a', entity_8-1);
  entity_1[entity_8-1]='';
  entity_5 = (char*)malloc(53*sizeof(char));
  entity_5[53-1]='';
  entity_3 = (char*)malloc(1*sizeof(char));
  entity_3[1-1]='';
  memcpy(entity_5, entity_1, entity_8*sizeof(char));
}