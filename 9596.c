void fun()
{
  int entity_0 = 78;
  char* entity_5;
  char entity_2[94] = "";
  entity_2 = NULL;
  memset(entity_2, 'e', 94-1);
  entity_2[94-1]='';
  entity_5 = (char*)malloc(entity_0*sizeof(char));
  entity_5[entity_0-1]='';
  strcpy(entity_5, entity_2);
}