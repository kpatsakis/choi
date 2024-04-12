void fun()
{
  int entity_2 = 21;
  int entity_6 = 19;
  char entity_8[74] = "";
  entity_8 = NULL;
  char entity_4[89] = "";
  entity_4 = NULL;
  char entity_5 = 'S';
  char* entity_3;
  entity_3 = (char*)malloc(entity_6*sizeof(char));
  entity_3[entity_6-1]='';
  memset(entity_8, 'L', 74-1);
  entity_8[74-1]='';
  memset(entity_4, 'w', 89-1);
  entity_4[89-1]='';
  strcpy(entity_3, entity_4);
}