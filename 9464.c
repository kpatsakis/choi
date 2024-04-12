void fun()
{
  int entity_9 = 37;
  char entity_1[74] = "";
  entity_1 = NULL;
  char entity_8[56] = "";
  entity_8 = NULL;
  char* entity_6;
  memset(entity_8, 'd', 56-1);
  entity_8[56-1]='';
  memset(entity_1, 'Z', 74-1);
  entity_1[74-1]='';
  entity_6 = (char*)malloc(entity_9*sizeof(char));
  entity_6[entity_9-1]='';
  memcpy(entity_6, entity_8, 56*sizeof(char));
}