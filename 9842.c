void fun()
{
  int entity_0 = 4;
  char entity_6[87] = "";
  entity_6 = NULL;
  char entity_4[entity_0] = "";
  entity_4 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(75*sizeof(char));
  entity_3[75-1]='';
  memset(entity_6, 'S', 87-1);
  entity_6[87-1]='';
  memset(entity_4, 'm', entity_0-1);
  entity_4[entity_0-1]='';
  strcpy(entity_3, entity_4);
}