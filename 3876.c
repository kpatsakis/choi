void fun()
{
  int entity_2 = 71;
  char entity_4 = 'g';
  char* entity_5;
  char entity_7[entity_2] = "";
  entity_7 = NULL;
  memset(entity_7, 'j', entity_2-1);
  entity_7[entity_2-1]='';
  entity_5 = (char*)malloc(48*sizeof(char));
  entity_5[48-1]='';
  entity_2 = 28;
  strcpy(entity_5, entity_7);
}