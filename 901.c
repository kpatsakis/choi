void fun()
{
  int entity_8 = 44;
  entity_8 = 28;
  char entity_6[17] = "";
  entity_6 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(entity_8*sizeof(char));
  entity_4[entity_8-1]='';
  memset(entity_6, 'w', 17-1);
  entity_6[17-1]='';
  strcpy(entity_4, entity_6);
}