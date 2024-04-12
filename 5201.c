void fun()
{
  int entity_8 = 83;
  char entity_6[7] = "";
  entity_6 = NULL;
  char* entity_7;
  memset(entity_6, 'O', 7-1);
  entity_6[7-1]='';
  entity_7 = (char*)malloc(entity_8*sizeof(char));
  entity_7[entity_8-1]='';
  strcpy(entity_7, entity_6);
}