void fun()
{
  int entity_6 = 12;
  char* entity_0;
  char entity_2[6] = "";
  entity_2 = NULL;
  memset(entity_2, 'I', 6-1);
  entity_2[6-1]='';
  entity_0 = (char*)malloc(entity_6*sizeof(char));
  entity_0[entity_6-1]='';
  strcpy(entity_0, entity_2);
}