void fun()
{
  int entity_6 = 24;
  entity_6 = 24;
  char* entity_9;
  char entity_0[46] = "";
  entity_0 = NULL;
  char entity_4[entity_6] = "";
  entity_4 = NULL;
  char* entity_3;
  entity_9 = (char*)malloc(41*sizeof(char));
  entity_9[41-1]='';
  memset(entity_4, 's', entity_6-1);
  entity_4[entity_6-1]='';
  memset(entity_0, 'b', 46-1);
  entity_0[46-1]='';
  entity_3 = (char*)malloc(4*sizeof(char));
  entity_3[4-1]='';
  strcpy(entity_3, entity_4);
}