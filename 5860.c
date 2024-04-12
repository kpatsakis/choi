void fun()
{
  int entity_6 = 10;
  entity_6 = 10;
  char entity_2 = 'z';
  char entity_5[entity_6] = "";
  entity_5 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(98*sizeof(char));
  entity_7[98-1]='';
  memset(entity_5, 'I', entity_6-1);
  entity_5[entity_6-1]='';
  strcpy(entity_7, entity_5);
}