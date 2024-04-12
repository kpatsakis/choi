void fun()
{
  int entity_7 = 33;
  int entity_4 = 33;
  char entity_5[entity_7] = "";
  entity_5 = NULL;
  char entity_3 = 'Z';
  char* entity_2;
  char entity_9 = 'p';
  memset(entity_5, 'd', entity_7-1);
  entity_5[entity_7-1]='';
  entity_2 = (char*)malloc(76*sizeof(char));
  entity_2[76-1]='';
  entity_7 = 52;
  memcpy(entity_2, entity_5, entity_7*sizeof(char));
}