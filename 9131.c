void fun()
{
  int entity_1 = 10;
  int entity_5 = 58;
  entity_1 = 10;
  char entity_0[entity_1] = "";
  entity_0 = NULL;
  char entity_2 = 'N';
  char* entity_7;
  memset(entity_0, 'g', entity_1-1);
  entity_0[entity_1-1]='';
  entity_7 = (char*)malloc(58*sizeof(char));
  entity_7[58-1]='';
  strcpy(entity_7, entity_0);
}