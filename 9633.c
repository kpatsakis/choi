void fun()
{
  int entity_5 = 17;
  char entity_6[2] = "";
  entity_6 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(entity_5*sizeof(char));
  entity_2[entity_5-1]='';
  memset(entity_6, 'e', 2-1);
  entity_6[2-1]='';
  strcpy(entity_2, entity_6);
}