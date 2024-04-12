void fun()
{
  int entity_5 = 47;
  char entity_4 = 'r';
  char* entity_3;
  char entity_7[entity_5] = "";
  entity_7 = NULL;
  memset(entity_7, 'V', entity_5-1);
  entity_7[entity_5-1]='';
  entity_3 = (char*)malloc(37*sizeof(char));
  entity_3[37-1]='';
  entity_5 = 26;
  strcpy(entity_3, entity_7);
}