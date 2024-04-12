void fun()
{
  int entity_3 = 56;
  char entity_1[entity_3] = "";
  entity_1 = NULL;
  char* entity_8;
  char entity_7[61] = "";
  entity_7 = NULL;
  memset(entity_1, 'Z', entity_3-1);
  entity_1[entity_3-1]='';
  entity_8 = (char*)malloc(56*sizeof(char));
  entity_8[56-1]='';
  memset(entity_7, 'O', 61-1);
  entity_7[61-1]='';
  strcpy(entity_8, entity_1);
}