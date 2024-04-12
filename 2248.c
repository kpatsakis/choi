void fun()
{
  int entity_6 = 56;
  char* entity_8;
  char entity_2[entity_6] = "";
  entity_2 = NULL;
  entity_8 = (char*)malloc(24*sizeof(char));
  entity_8[24-1]='';
  memset(entity_2, 'q', entity_6-1);
  entity_2[entity_6-1]='';
  strcpy(entity_8, entity_2);
}