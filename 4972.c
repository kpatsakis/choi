void fun()
{
  int entity_0 = 64;
  char entity_7[15] = "";
  entity_7 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(entity_0*sizeof(char));
  entity_2[entity_0-1]='';
  memset(entity_7, 'D', 15-1);
  entity_7[15-1]='';
  strcpy(entity_2, entity_7);
}