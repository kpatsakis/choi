void fun()
{
  int entity_6 = 59;
  char* entity_5;
  char entity_0[entity_6] = "";
  entity_0 = NULL;
  char entity_4[23] = "";
  entity_4 = NULL;
  char entity_3 = 'j';
  memset(entity_0, 'b', entity_6-1);
  entity_0[entity_6-1]='';
  memset(entity_4, 'Z', 23-1);
  entity_4[23-1]='';
  entity_5 = (char*)malloc(9*sizeof(char));
  entity_5[9-1]='';
  strcpy(entity_5, entity_0);
}