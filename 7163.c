void fun()
{
  int entity_0 = 91;
  int entity_1 = 8;
  char* entity_2;
  char entity_6[35] = "";
  entity_6 = NULL;
  memset(entity_6, 'A', 35-1);
  entity_6[35-1]='';
  entity_2 = (char*)malloc(entity_0*sizeof(char));
  entity_2[entity_0-1]='';
  strcpy(entity_2, entity_6);
}