void fun()
{
  int entity_7 = 98;
  int entity_3 = 97;
  char* entity_2;
  char entity_8[entity_3] = "";
  entity_8 = NULL;
  entity_2 = (char*)malloc(17*sizeof(char));
  entity_2[17-1]='';
  memset(entity_8, 'J', entity_3-1);
  entity_8[entity_3-1]='';
  strcpy(entity_2, entity_8);
}