void fun()
{
  int entity_4 = 62;
  char entity_7[58] = "";
  entity_7 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(entity_4*sizeof(char));
  entity_2[entity_4-1]='';
  memset(entity_7, 'h', 58-1);
  entity_7[58-1]='';
  strcpy(entity_2, entity_7);
}