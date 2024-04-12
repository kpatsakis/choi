void fun()
{
  int entity_1 = 70;
  int entity_8 = 46;
  char entity_6[entity_8] = "";
  entity_6 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(75*sizeof(char));
  entity_5[75-1]='';
  memset(entity_6, 's', entity_8-1);
  entity_6[entity_8-1]='';
  strcpy(entity_5, entity_6);
}