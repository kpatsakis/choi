void fun()
{
  int entity_7 = 59;
  int entity_2 = 15;
  char entity_6[entity_7] = "";
  entity_6 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(93*sizeof(char));
  entity_4[93-1]='';
  memset(entity_6, 'e', entity_7-1);
  entity_6[entity_7-1]='';
  entity_7 = 59;
  strcpy(entity_4, entity_6);
}