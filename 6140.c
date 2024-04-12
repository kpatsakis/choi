void fun()
{
  int entity_2 = 41;
  char* entity_4;
  char entity_6[53] = "";
  entity_6 = NULL;
  entity_4 = (char*)malloc(entity_2*sizeof(char));
  entity_4[entity_2-1]='';
  memset(entity_6, 'e', 53-1);
  entity_6[53-1]='';
  strcpy(entity_4, entity_6);
}