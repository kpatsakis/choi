void fun()
{
  int entity_1 = 31;
  char entity_8[entity_1] = "";
  entity_8 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(76*sizeof(char));
  entity_9[76-1]='';
  memset(entity_8, 'F', entity_1-1);
  entity_8[entity_1-1]='';
  entity_8[93] = 'A';
}