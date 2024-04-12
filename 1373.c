void fun()
{
  int entity_7 = 61;
  int entity_0 = 1;
  int entity_6 = 13;
  char entity_1[10] = "";
  entity_1 = NULL;
  char entity_8[0] = "";
  entity_8 = NULL;
  char* entity_5;
  memset(entity_1, 'I', 10-1);
  entity_1[10-1]='';
  memset(entity_8, 'A', 0-1);
  entity_8[0-1]='';
  entity_5 = (char*)malloc(entity_6*sizeof(char));
  entity_5[entity_6-1]='';
  strcpy(entity_5, entity_1);
}