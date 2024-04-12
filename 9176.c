void fun()
{
  int entity_5 = 65;
  char entity_8[entity_5] = "";
  entity_8 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(94*sizeof(char));
  entity_3[94-1]='';
  memset(entity_8, 'Z', entity_5-1);
  entity_8[entity_5-1]='';
  entity_5 = 39;
  strcpy(entity_3, entity_8);
}