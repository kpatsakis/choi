void fun()
{
  int entity_8 = 22;
  entity_8 = 62;
  char entity_1[74] = "";
  entity_1 = NULL;
  char* entity_9;
  char* entity_7;
  memset(entity_1, 'Y', 74-1);
  entity_1[74-1]='';
  entity_7 = (char*)malloc(entity_8*sizeof(char));
  entity_7[entity_8-1]='';
  entity_9 = (char*)malloc(89*sizeof(char));
  entity_9[89-1]='';
  memcpy(entity_7, entity_1, 74*sizeof(char));
}