void fun()
{
  int entity_0 = 97;
  char entity_2[40] = "";
  entity_2 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(entity_0*sizeof(char));
  entity_7[entity_0-1]='';
  memset(entity_2, 'H', 40-1);
  entity_2[40-1]='';
  strcpy(entity_7, entity_2);
}