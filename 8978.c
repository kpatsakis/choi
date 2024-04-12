void fun()
{
  int entity_6 = 66;
  int entity_1 = 4;
  char entity_2[74] = "";
  entity_2 = NULL;
  char entity_3[96] = "";
  entity_3 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(entity_1*sizeof(char));
  entity_0[entity_1-1]='';
  memset(entity_2, 'l', 74-1);
  entity_2[74-1]='';
  memset(entity_3, 'j', 96-1);
  entity_3[96-1]='';
  strcpy(entity_0, entity_2);
}