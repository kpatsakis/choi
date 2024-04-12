void fun()
{
  int entity_2 = 40;
  char entity_8[entity_2] = "";
  entity_8 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(67*sizeof(char));
  entity_7[67-1]='';
  memset(entity_8, 'H', entity_2-1);
  entity_8[entity_2-1]='';
  strcpy(entity_7, entity_8);
}