void fun()
{
  int entity_6 = 47;
  int entity_1 = 39;
  entity_1 = 62;
  char entity_4[entity_1] = "";
  entity_4 = NULL;
  char* entity_3;
  char* entity_2;
  memset(entity_4, 'X', entity_1-1);
  entity_4[entity_1-1]='';
  entity_2 = (char*)malloc(86*sizeof(char));
  entity_2[86-1]='';
  entity_3 = (char*)malloc(73*sizeof(char));
  entity_3[73-1]='';
  memcpy(entity_3, entity_4, entity_1*sizeof(char));
}