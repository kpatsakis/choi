void fun()
{
  int entity_3 = 61;
  entity_3 = 61;
  char entity_2[entity_3] = "";
  entity_2 = NULL;
  char* entity_0;
  memset(entity_2, 'V', entity_3-1);
  entity_2[entity_3-1]='';
  entity_0 = (char*)malloc(3*sizeof(char));
  entity_0[3-1]='';
  strcpy(entity_0, entity_2);
}