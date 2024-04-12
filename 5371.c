void fun()
{
  int entity_5 = 46;
  char entity_2[87] = "";
  entity_2 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(entity_5*sizeof(char));
  entity_6[entity_5-1]='';
  memset(entity_2, 'j', 87-1);
  entity_2[87-1]='';
  entity_5 = 69;
  strcpy(entity_6, entity_2);
}