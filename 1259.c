void fun()
{
  int entity_7 = 62;
  entity_7 = 62;
  char* entity_2;
  char entity_3[entity_7] = "";
  entity_3 = NULL;
  entity_2 = (char*)malloc(33*sizeof(char));
  entity_2[33-1]='';
  memset(entity_3, 'y', entity_7-1);
  entity_3[entity_7-1]='';
  strcpy(entity_2, entity_3);
}