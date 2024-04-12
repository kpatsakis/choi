void fun()
{
  int entity_1 = 7;
  entity_1 = 41;
  char entity_6[15] = "";
  entity_6 = NULL;
  char entity_2[entity_1] = "";
  entity_2 = NULL;
  char* entity_8;
  memset(entity_6, 'I', 15-1);
  entity_6[15-1]='';
  entity_8 = (char*)malloc(16*sizeof(char));
  entity_8[16-1]='';
  memset(entity_2, 'L', entity_1-1);
  entity_2[entity_1-1]='';
  memcpy(entity_8, entity_2, entity_1*sizeof(char));
}