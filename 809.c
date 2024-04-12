void fun()
{
  int entity_0 = 1;
  char* entity_2;
  char* entity_6;
  char entity_1 = 'V';
  char entity_3[32] = "";
  entity_3 = NULL;
  memset(entity_3, 'x', 32-1);
  entity_3[32-1]='';
  entity_6 = (char*)malloc(entity_0*sizeof(char));
  entity_6[entity_0-1]='';
  entity_2 = (char*)malloc(85*sizeof(char));
  entity_2[85-1]='';
  strcpy(entity_6, entity_3);
}