void fun()
{
  int entity_0 = 19;
  int entity_3 = 45;
  char* entity_2;
  char entity_7[88] = "";
  entity_7 = NULL;
  memset(entity_7, 'O', 88-1);
  entity_7[88-1]='';
  entity_2 = (char*)malloc(entity_0*sizeof(char));
  entity_2[entity_0-1]='';
  strcpy(entity_2, entity_7);
}