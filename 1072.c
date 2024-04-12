void fun()
{
  int entity_7 = 24;
  char entity_3[entity_7] = "";
  entity_3 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(24*sizeof(char));
  entity_4[24-1]='';
  memset(entity_3, 'W', entity_7-1);
  entity_3[entity_7-1]='';
  strcpy(entity_4, entity_3);
}