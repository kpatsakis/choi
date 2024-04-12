void fun()
{
  int entity_8 = 91;
  char entity_2[entity_8] = "";
  entity_2 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(25*sizeof(char));
  entity_6[25-1]='';
  memset(entity_2, 'X', entity_8-1);
  entity_2[entity_8-1]='';
  strcpy(entity_6, entity_2);
}