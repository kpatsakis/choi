void fun()
{
  int entity_2 = 27;
  char entity_6[entity_2] = "";
  entity_6 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(48*sizeof(char));
  entity_8[48-1]='';
  memset(entity_6, 's', entity_2-1);
  entity_6[entity_2-1]='';
  strcpy(entity_8, entity_6);
}