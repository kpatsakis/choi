void fun()
{
  int entity_8 = 60;
  char entity_6[86] = "";
  entity_6 = NULL;
  char entity_2 = 'C';
  char entity_5[74] = "";
  entity_5 = NULL;
  char* entity_3;
  memset(entity_6, 'V', 86-1);
  entity_6[86-1]='';
  memset(entity_5, 'R', 74-1);
  entity_5[74-1]='';
  entity_3 = (char*)malloc(entity_8*sizeof(char));
  entity_3[entity_8-1]='';
  memcpy(entity_3, entity_5, 74*sizeof(char));
}