void fun()
{
  int entity_3 = 15;
  entity_3 = 81;
  char* entity_5;
  char* entity_4;
  char entity_2[entity_3] = "";
  entity_2 = NULL;
  char entity_1 = 'R';
  entity_5 = (char*)malloc(89*sizeof(char));
  entity_5[89-1]='';
  memset(entity_2, 'E', entity_3-1);
  entity_2[entity_3-1]='';
  entity_4 = (char*)malloc(53*sizeof(char));
  entity_4[53-1]='';
  memcpy(entity_5, entity_2, entity_3*sizeof(char));
}