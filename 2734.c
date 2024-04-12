void fun()
{
  char entity_1[34] = "";
  entity_1 = NULL;
  char* entity_8;
  char* entity_3;
  entity_3 = (char*)malloc(2*sizeof(char));
  entity_3[2-1]='';
  entity_8 = (char*)malloc(74*sizeof(char));
  entity_8[74-1]='';
  memset(entity_1, 'N', 34-1);
  entity_1[34-1]='';
  strcpy(entity_3, entity_1);
}