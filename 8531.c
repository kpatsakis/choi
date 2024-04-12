void fun()
{
  int entity_4 = 70;
  int entity_8 = 56;
  char entity_1[entity_8] = "";
  entity_1 = NULL;
  char* entity_6;
  char* entity_3;
  entity_3 = (char*)malloc(19*sizeof(char));
  entity_3[19-1]='';
  entity_6 = (char*)malloc(4*sizeof(char));
  entity_6[4-1]='';
  memset(entity_1, 'R', entity_8-1);
  entity_1[entity_8-1]='';
  entity_8 = 79;
  memcpy(entity_6, entity_1, entity_8*sizeof(char));
}