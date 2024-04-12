void fun()
{
  int entity_7 = 37;
  char entity_5[entity_7] = "";
  entity_5 = NULL;
  char* entity_2;
  memset(entity_5, 'S', entity_7-1);
  entity_5[entity_7-1]='';
  entity_2 = (char*)malloc(18*sizeof(char));
  entity_2[18-1]='';
  strcpy(entity_2, entity_5);
}