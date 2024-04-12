void fun()
{
  int entity_1 = 61;
  char* entity_7;
  char entity_3[69] = "";
  entity_3 = NULL;
  char entity_8[76] = "";
  entity_8 = NULL;
  memset(entity_3, 'L', 69-1);
  entity_3[69-1]='';
  entity_7 = (char*)malloc(entity_1*sizeof(char));
  entity_7[entity_1-1]='';
  memset(entity_8, 'f', 76-1);
  entity_8[76-1]='';
  strcpy(entity_7, entity_8);
}