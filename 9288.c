void fun()
{
  int entity_2 = 75;
  char* entity_4;
  char entity_6[50] = "";
  entity_6 = NULL;
  memset(entity_6, 'P', 50-1);
  entity_6[50-1]='';
  entity_4 = (char*)malloc(entity_2*sizeof(char));
  entity_4[entity_2-1]='';
  entity_2 = 17;
  strcpy(entity_4, entity_6);
}