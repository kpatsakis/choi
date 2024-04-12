void fun()
{
  int entity_5 = 69;
  entity_5 = 69;
  char entity_6[entity_5] = "";
  entity_6 = NULL;
  char* entity_2;
  memset(entity_6, 'Q', entity_5-1);
  entity_6[entity_5-1]='';
  entity_2 = (char*)malloc(96*sizeof(char));
  entity_2[96-1]='';
  strcpy(entity_2, entity_6);
}