void fun()
{
  int entity_5 = 54;
  char entity_2[87] = "";
  entity_2 = NULL;
  char entity_8[entity_5] = "";
  entity_8 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(74*sizeof(char));
  entity_1[74-1]='';
  memset(entity_2, 'b', 87-1);
  entity_2[87-1]='';
  memset(entity_8, 'q', entity_5-1);
  entity_8[entity_5-1]='';
  entity_5 = 22;
  strcpy(entity_1, entity_8);
}