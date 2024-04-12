void fun()
{
  int entity_1 = 86;
  int entity_4 = 11;
  char* entity_0;
  char entity_2[70] = "";
  entity_2 = NULL;
  char entity_6[90] = "";
  entity_6 = NULL;
  entity_0 = (char*)malloc(entity_1*sizeof(char));
  entity_0[entity_1-1]='';
  memset(entity_2, 's', 70-1);
  entity_2[70-1]='';
  memset(entity_6, 'N', 90-1);
  entity_6[90-1]='';
  entity_1 = 23;
  strcpy(entity_0, entity_2);
}