void fun()
{
  int entity_2 = 7;
  char* entity_4;
  char entity_6[entity_2] = "";
  entity_6 = NULL;
  memset(entity_6, 't', entity_2-1);
  entity_6[entity_2-1]='';
  entity_4 = (char*)malloc(84*sizeof(char));
  entity_4[84-1]='';
  strcpy(entity_4, entity_6);
}