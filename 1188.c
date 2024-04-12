void fun()
{
  int entity_6 = 66;
  char entity_8[entity_6] = "";
  entity_8 = NULL;
  char* entity_2;
  memset(entity_8, 'D', entity_6-1);
  entity_8[entity_6-1]='';
  entity_2 = (char*)malloc(27*sizeof(char));
  entity_2[27-1]='';
  strcpy(entity_2, entity_8);
}