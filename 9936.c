void fun()
{
  int entity_6 = 66;
  entity_6 = 84;
  char entity_4[entity_6] = "";
  entity_4 = NULL;
  char* entity_0;
  char entity_3[9] = "";
  entity_3 = NULL;
  memset(entity_4, 'K', entity_6-1);
  entity_4[entity_6-1]='';
  entity_0 = (char*)malloc(87*sizeof(char));
  entity_0[87-1]='';
  memset(entity_3, 'H', 9-1);
  entity_3[9-1]='';
  entity_4[17] = 'H';
}