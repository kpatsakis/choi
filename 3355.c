void fun()
{
  int entity_9 = 73;
  char* entity_3;
  char entity_6[74] = "";
  entity_6 = NULL;
  char entity_5[2] = "";
  entity_5 = NULL;
  entity_3 = (char*)malloc(8*sizeof(char));
  entity_3[8-1]='';
  memset(entity_5, 'q', 2-1);
  entity_5[2-1]='';
  memset(entity_6, 'Z', 74-1);
  entity_6[74-1]='';
  strcpy(entity_3, entity_6);
}