void fun()
{
  int entity_7 = 47;
  char entity_9 = 'v';
  char entity_2[entity_7] = "";
  entity_2 = NULL;
  char* entity_4;
  char entity_1 = 'U';
  entity_4 = (char*)malloc(44*sizeof(char));
  entity_4[44-1]='';
  memset(entity_2, 'M', entity_7-1);
  entity_2[entity_7-1]='';
  strcpy(entity_4, entity_2);
}