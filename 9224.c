void fun()
{
  int entity_7 = 62;
  int entity_2 = 0;
  entity_7 = 98;
  char entity_6[5] = "";
  entity_6 = NULL;
  char* entity_4;
  char* entity_0;
  memset(entity_6, 'A', 5-1);
  entity_6[5-1]='';
  entity_4 = (char*)malloc(30*sizeof(char));
  entity_4[30-1]='';
  entity_0 = (char*)malloc(entity_7*sizeof(char));
  entity_0[entity_7-1]='';
  strcpy(entity_0, entity_6);
}