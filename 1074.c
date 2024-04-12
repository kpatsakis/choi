void fun()
{
  int entity_8 = 96;
  char* entity_5;
  char entity_7[4] = "";
  entity_7 = NULL;
  char entity_9[78] = "";
  entity_9 = NULL;
  char entity_0 = 'd';
  char entity_2[74] = "";
  entity_2 = NULL;
  memset(entity_2, 'h', 74-1);
  entity_2[74-1]='';
  memset(entity_7, 'i', 4-1);
  entity_7[4-1]='';
  memset(entity_9, 'x', 78-1);
  entity_9[78-1]='';
  entity_5 = (char*)malloc(entity_8*sizeof(char));
  entity_5[entity_8-1]='';
  entity_8 = 87;
  strcpy(entity_5, entity_2);
}