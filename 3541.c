void fun()
{
  char* entity_7;
  char entity_5 = 'V';
  char entity_8[74] = "";
  entity_8 = NULL;
  char* entity_4;
  memset(entity_8, 'A', 74-1);
  entity_8[74-1]='';
  entity_4 = (char*)malloc(49*sizeof(char));
  entity_4[49-1]='';
  entity_7 = (char*)malloc(76*sizeof(char));
  entity_7[76-1]='';
  memcpy(entity_4, entity_8, 74*sizeof(char));
}