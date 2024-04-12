void fun()
{
  int entity_4 = 49;
  char entity_6[entity_4] = "";
  entity_6 = NULL;
  char* entity_2;
  char* entity_0;
  entity_2 = (char*)malloc(53*sizeof(char));
  entity_2[53-1]='';
  memset(entity_6, 'D', entity_4-1);
  entity_6[entity_4-1]='';
  entity_0 = (char*)malloc(59*sizeof(char));
  entity_0[59-1]='';
  entity_4 = 25;
  strcpy(entity_2, entity_6);
}