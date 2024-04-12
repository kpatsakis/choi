void fun()
{
  int entity_5 = 72;
  char* entity_7;
  char entity_4[43] = "";
  entity_4 = NULL;
  entity_7 = (char*)malloc(entity_5*sizeof(char));
  entity_7[entity_5-1]='';
  memset(entity_4, 'z', 43-1);
  entity_4[43-1]='';
  strcpy(entity_7, entity_4);
}