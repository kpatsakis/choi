void fun()
{
  int entity_0 = 67;
  char entity_7[44] = "";
  entity_7 = NULL;
  char* entity_3;
  memset(entity_7, 'g', 44-1);
  entity_7[44-1]='';
  entity_3 = (char*)malloc(entity_0*sizeof(char));
  entity_3[entity_0-1]='';
  strcpy(entity_3, entity_7);
}