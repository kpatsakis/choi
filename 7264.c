void fun()
{
  int entity_3 = 77;
  char entity_8[1] = "";
  entity_8 = NULL;
  char entity_2[74] = "";
  entity_2 = NULL;
  char* entity_5;
  memset(entity_2, 'E', 74-1);
  entity_2[74-1]='';
  entity_5 = (char*)malloc(entity_3*sizeof(char));
  entity_5[entity_3-1]='';
  memset(entity_8, 'A', 1-1);
  entity_8[1-1]='';
  entity_3 = 80;
  memcpy(entity_5, entity_2, 74*sizeof(char));
}