void fun()
{
  int entity_8 = 70;
  char* entity_6;
  char entity_5[entity_8] = "";
  entity_5 = NULL;
  entity_6 = (char*)malloc(13*sizeof(char));
  entity_6[13-1]='';
  memset(entity_5, 'u', entity_8-1);
  entity_5[entity_8-1]='';
  entity_8 = 95;
  strcpy(entity_6, entity_5);
}