void fun()
{
  int entity_6 = 16;
  int entity_4 = 4;
  char entity_1[74] = "";
  entity_1 = NULL;
  char* entity_8;
  char entity_2[8] = "";
  entity_2 = NULL;
  entity_8 = (char*)malloc(entity_6*sizeof(char));
  entity_8[entity_6-1]='';
  memset(entity_1, 'C', 74-1);
  entity_1[74-1]='';
  memset(entity_2, 'q', 8-1);
  entity_2[8-1]='';
  entity_6 = 4;
  strcpy(entity_8, entity_2);
}