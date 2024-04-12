void fun()
{
  int entity_3 = 30;
  int entity_7 = 39;
  char entity_0 = 'Y';
  char* entity_1;
  char entity_6[entity_3] = "";
  entity_6 = NULL;
  char* entity_4;
  entity_1 = (char*)malloc(19*sizeof(char));
  entity_1[19-1]='';
  entity_4 = (char*)malloc(4*sizeof(char));
  entity_4[4-1]='';
  memset(entity_6, 'R', entity_3-1);
  entity_6[entity_3-1]='';
  entity_3 = 53;
  memcpy(entity_4, entity_6, entity_3*sizeof(char));
}