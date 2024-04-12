void fun()
{
  int entity_3 = 24;
  char entity_0 = 'a';
  char* entity_2;
  char entity_6[entity_3] = "";
  entity_6 = NULL;
  entity_2 = (char*)malloc(13*sizeof(char));
  entity_2[13-1]='';
  memset(entity_6, 'q', entity_3-1);
  entity_6[entity_3-1]='';
  entity_3 = 39;
  strcpy(entity_2, entity_6);
}