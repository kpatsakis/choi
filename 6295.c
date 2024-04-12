void fun()
{
  int entity_3 = 85;
  char* entity_8;
  char entity_5[entity_3] = "";
  entity_5 = NULL;
  entity_8 = (char*)malloc(28*sizeof(char));
  entity_8[28-1]='';
  memset(entity_5, 'w', entity_3-1);
  entity_5[entity_3-1]='';
  entity_3 = 42;
  strcpy(entity_8, entity_5);
}