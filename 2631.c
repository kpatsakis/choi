void fun()
{
  int entity_4 = 90;
  entity_4 = 90;
  char* entity_3;
  char entity_6[entity_4] = "";
  entity_6 = NULL;
  memset(entity_6, 'k', entity_4-1);
  entity_6[entity_4-1]='';
  entity_3 = (char*)malloc(27*sizeof(char));
  entity_3[27-1]='';
  strcpy(entity_3, entity_6);
}