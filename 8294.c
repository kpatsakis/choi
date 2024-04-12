void fun()
{
  int entity_1 = 69;
  char entity_3[entity_1] = "";
  entity_3 = NULL;
  char entity_7[74] = "";
  entity_7 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(51*sizeof(char));
  entity_0[51-1]='';
  memset(entity_3, 'a', entity_1-1);
  entity_3[entity_1-1]='';
  memset(entity_7, 'W', 74-1);
  entity_7[74-1]='';
  entity_1 = 51;
  memcpy(entity_0, entity_3, entity_1*sizeof(char));
}