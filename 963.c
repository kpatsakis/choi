void fun()
{
  int entity_6 = 11;
  int entity_8 = 70;
  char entity_5 = 'a';
  char entity_7[entity_8] = "";
  entity_7 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(47*sizeof(char));
  entity_2[47-1]='';
  memset(entity_7, 'Z', entity_8-1);
  entity_7[entity_8-1]='';
  entity_8 = 32;
  strcpy(entity_2, entity_7);
}