void fun()
{
  int entity_0 = 23;
  entity_0 = 100;
  char* entity_4;
  char entity_5[3] = "";
  entity_5 = NULL;
  entity_4 = (char*)malloc(entity_0*sizeof(char));
  entity_4[entity_0-1]='';
  memset(entity_5, 'O', 3-1);
  entity_5[3-1]='';
  strcpy(entity_4, entity_5);
}