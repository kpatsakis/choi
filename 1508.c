void fun()
{
  int entity_0 = 48;
  entity_0 = 33;
  char* entity_5;
  char entity_7[47] = "";
  entity_7 = NULL;
  entity_5 = (char*)malloc(entity_0*sizeof(char));
  entity_5[entity_0-1]='';
  memset(entity_7, 'e', 47-1);
  entity_7[47-1]='';
  strcpy(entity_5, entity_7);
}