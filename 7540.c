void fun()
{
  int entity_8 = 50;
  entity_8 = 72;
  char entity_1 = 'V';
  char* entity_6;
  char entity_0[entity_8] = "";
  entity_0 = NULL;
  char entity_4[74] = "";
  entity_4 = NULL;
  entity_6 = (char*)malloc(89*sizeof(char));
  entity_6[89-1]='';
  memset(entity_0, 'D', entity_8-1);
  entity_0[entity_8-1]='';
  memset(entity_4, 'A', 74-1);
  entity_4[74-1]='';
  memcpy(entity_6, entity_0, entity_8*sizeof(char));
}