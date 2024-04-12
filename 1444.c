void fun()
{
  int entity_5 = 16;
  int entity_0 = 8;
  char entity_6[entity_0] = "";
  entity_6 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(62*sizeof(char));
  entity_2[62-1]='';
  memset(entity_6, 'V', entity_0-1);
  entity_6[entity_0-1]='';
  strcpy(entity_2, entity_6);
}