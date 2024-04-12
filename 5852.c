void fun()
{
  int entity_8 = 10;
  int entity_7 = 92;
  entity_8 = 91;
  char* entity_3;
  char entity_1[43] = "";
  entity_1 = NULL;
  memset(entity_1, 'N', 43-1);
  entity_1[43-1]='';
  entity_3 = (char*)malloc(entity_8*sizeof(char));
  entity_3[entity_8-1]='';
  strcpy(entity_3, entity_1);
}