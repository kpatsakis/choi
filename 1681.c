void fun()
{
  int entity_2 = 2;
  char* entity_9;
  char entity_8[34] = "";
  entity_8 = NULL;
  entity_9 = (char*)malloc(7*sizeof(char));
  entity_9[7-1]='';
  memset(entity_8, 'j', 34-1);
  entity_8[34-1]='';
  strcpy(entity_9, entity_8);
}