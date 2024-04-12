void fun()
{
  int entity_6 = 84;
  char* entity_2;
  char entity_0[52] = "";
  entity_0 = NULL;
  memset(entity_0, 'Y', 52-1);
  entity_0[52-1]='';
  entity_2 = (char*)malloc(entity_6*sizeof(char));
  entity_2[entity_6-1]='';
  strcpy(entity_2, entity_0);
}