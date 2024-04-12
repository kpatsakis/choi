void fun()
{
  int entity_8 = 88;
  char* entity_5;
  char entity_2[82] = "";
  entity_2 = NULL;
  memset(entity_2, 'n', 82-1);
  entity_2[82-1]='';
  entity_5 = (char*)malloc(entity_8*sizeof(char));
  entity_5[entity_8-1]='';
  entity_8 = 89;
  strcpy(entity_5, entity_2);
}