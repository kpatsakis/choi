void fun()
{
  char entity_1[49] = "";
  entity_1 = NULL;
  char* entity_5;
  char entity_8[74] = "";
  entity_8 = NULL;
  memset(entity_8, 's', 74-1);
  entity_8[74-1]='';
  memset(entity_1, 'D', 49-1);
  entity_1[49-1]='';
  entity_5 = (char*)malloc(57*sizeof(char));
  entity_5[57-1]='';
  memcpy(entity_5, entity_1, 49*sizeof(char));
}