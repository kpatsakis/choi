void fun()
{
  int entity_3 = 83;
  char* entity_7;
  char entity_6[93] = "";
  entity_6 = NULL;
  entity_7 = (char*)malloc(entity_3*sizeof(char));
  entity_7[entity_3-1]='';
  memset(entity_6, 'X', 93-1);
  entity_6[93-1]='';
  strcpy(entity_7, entity_6);
}