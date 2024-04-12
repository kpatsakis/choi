void fun()
{
  int entity_4 = 5;
  char entity_0[76] = "";
  entity_0 = NULL;
  char entity_6 = 'z';
  char* entity_7;
  char entity_8[74] = "";
  entity_8 = NULL;
  char entity_5 = 'X';
  memset(entity_0, 's', 76-1);
  entity_0[76-1]='';
  memset(entity_8, 'q', 74-1);
  entity_8[74-1]='';
  entity_7 = (char*)malloc(entity_4*sizeof(char));
  entity_7[entity_4-1]='';
  entity_4 = 77;
  memcpy(entity_7, entity_0, 76*sizeof(char));
}