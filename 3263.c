void fun()
{
  int entity_2 = 74;
  char entity_4 = 'b';
  char entity_7[entity_2] = "";
  entity_7 = NULL;
  char* entity_8;
  memset(entity_7, 'g', entity_2-1);
  entity_7[entity_2-1]='';
  entity_8 = (char*)malloc(5*sizeof(char));
  entity_8[5-1]='';
  strcpy(entity_8, entity_7);
}