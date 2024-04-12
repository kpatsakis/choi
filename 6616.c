void fun()
{
  int entity_5 = 49;
  entity_5 = 9;
  char entity_8[entity_5] = "";
  entity_8 = NULL;
  char* entity_2;
  memset(entity_8, 'n', entity_5-1);
  entity_8[entity_5-1]='';
  entity_2 = (char*)malloc(25*sizeof(char));
  entity_2[25-1]='';
  memcpy(entity_2, entity_8, entity_5*sizeof(char));
}