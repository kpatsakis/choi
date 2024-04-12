void fun()
{
  int entity_2 = 36;
  char* entity_6;
  char entity_7[88] = "";
  entity_7 = NULL;
  memset(entity_7, 'A', 88-1);
  entity_7[88-1]='';
  entity_6 = (char*)malloc(entity_2*sizeof(char));
  entity_6[entity_2-1]='';
  strcpy(entity_6, entity_7);
}