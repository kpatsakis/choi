void fun()
{
  int entity_6 = 33;
  char* entity_8;
  char entity_4[entity_6] = "";
  entity_4 = NULL;
  entity_8 = (char*)malloc(94*sizeof(char));
  entity_8[94-1]='';
  memset(entity_4, 'Z', entity_6-1);
  entity_4[entity_6-1]='';
  strcpy(entity_8, entity_4);
}