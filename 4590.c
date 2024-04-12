void fun()
{
  int entity_0 = 3;
  char entity_7[74] = "";
  entity_7 = NULL;
  char* entity_3;
  char entity_6[57] = "";
  entity_6 = NULL;
  memset(entity_6, 'j', 57-1);
  entity_6[57-1]='';
  memset(entity_7, 'X', 74-1);
  entity_7[74-1]='';
  entity_3 = (char*)malloc(entity_0*sizeof(char));
  entity_3[entity_0-1]='';
  entity_0 = 93;
  strcpy(entity_3, entity_6);
}