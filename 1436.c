void fun()
{
  int entity_4 = 18;
  int entity_0 = 100;
  entity_0 = 62;
  char entity_7[26] = "";
  entity_7 = NULL;
  char* entity_2;
  memset(entity_7, 'y', 26-1);
  entity_7[26-1]='';
  entity_2 = (char*)malloc(entity_0*sizeof(char));
  entity_2[entity_0-1]='';
  strcpy(entity_2, entity_7);
}