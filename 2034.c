void fun()
{
  int entity_7 = 62;
  char* entity_4;
  char entity_6 = 'x';
  char entity_3[8] = "";
  entity_3 = NULL;
  entity_4 = (char*)malloc(entity_7*sizeof(char));
  entity_4[entity_7-1]='';
  memset(entity_3, 'j', 8-1);
  entity_3[8-1]='';
  strcpy(entity_4, entity_3);
}