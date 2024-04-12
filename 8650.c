void fun()
{
  int entity_0 = 27;
  entity_0 = 56;
  char entity_2 = 'n';
  char entity_9[79] = "";
  entity_9 = NULL;
  char* entity_3;
  char entity_5[74] = "";
  entity_5 = NULL;
  memset(entity_9, 'u', 79-1);
  entity_9[79-1]='';
  memset(entity_5, 'l', 74-1);
  entity_5[74-1]='';
  entity_3 = (char*)malloc(entity_0*sizeof(char));
  entity_3[entity_0-1]='';
  strcpy(entity_3, entity_9);
}