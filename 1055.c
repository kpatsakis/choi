void fun()
{
  int entity_1 = 45;
  char entity_7[59] = "";
  entity_7 = NULL;
  char entity_0[74] = "";
  entity_0 = NULL;
  char* entity_9;
  memset(entity_7, 'm', 59-1);
  entity_7[59-1]='';
  memset(entity_0, 'v', 74-1);
  entity_0[74-1]='';
  entity_9 = (char*)malloc(83*sizeof(char));
  entity_9[83-1]='';
  strcpy(entity_9, entity_7);
}