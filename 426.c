void fun()
{
  int entity_5 = 87;
  char* entity_2;
  char entity_0[entity_5] = "";
  entity_0 = NULL;
  char entity_3 = 'X';
  char entity_7 = 'm';
  entity_2 = (char*)malloc(72*sizeof(char));
  entity_2[72-1]='';
  memset(entity_0, 'e', entity_5-1);
  entity_0[entity_5-1]='';
  entity_5 = 45;
  strcpy(entity_2, entity_0);
}