void fun()
{
  int entity_1 = 92;
  entity_1 = 10;
  char* entity_5;
  char entity_7[entity_1] = "";
  entity_7 = NULL;
  char* entity_4;
  char entity_2[56] = "";
  entity_2 = NULL;
  entity_5 = (char*)malloc(5*sizeof(char));
  entity_5[5-1]='';
  entity_4 = (char*)malloc(83*sizeof(char));
  entity_4[83-1]='';
  memset(entity_7, 't', entity_1-1);
  entity_7[entity_1-1]='';
  memset(entity_2, 'x', 56-1);
  entity_2[56-1]='';
  memcpy(entity_5, entity_7, entity_1*sizeof(char));
}