void fun()
{
  int entity_3 = 30;
  int entity_2 = 91;
  entity_2 = 91;
  char entity_7[74] = "";
  entity_7 = NULL;
  char* entity_8;
  char entity_9 = 'Y';
  char entity_0[89] = "";
  entity_0 = NULL;
  memset(entity_7, 'L', 74-1);
  entity_7[74-1]='';
  entity_8 = (char*)malloc(entity_2*sizeof(char));
  entity_8[entity_2-1]='';
  memset(entity_0, 'V', 89-1);
  entity_0[89-1]='';
  memcpy(entity_8, entity_0, 89*sizeof(char));
}