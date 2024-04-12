void fun()
{
  int entity_5 = 64;
  char* entity_4;
  char* entity_3;
  char entity_0[71] = "";
  entity_0 = NULL;
  entity_4 = (char*)malloc(entity_5*sizeof(char));
  entity_4[entity_5-1]='';
  memset(entity_0, 'F', 71-1);
  entity_0[71-1]='';
  entity_3 = (char*)malloc(75*sizeof(char));
  entity_3[75-1]='';
  strcpy(entity_4, entity_0);
}