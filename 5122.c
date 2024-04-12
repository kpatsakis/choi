void fun()
{
  int entity_8 = 58;
  char entity_5[75] = "";
  entity_5 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(entity_8*sizeof(char));
  entity_2[entity_8-1]='';
  memset(entity_5, 'w', 75-1);
  entity_5[75-1]='';
  strcpy(entity_2, entity_5);
}