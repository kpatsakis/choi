void fun()
{
  char* entity_6;
  char entity_1[46] = "";
  entity_1 = NULL;
  entity_6 = (char*)malloc(45*sizeof(char));
  entity_6[45-1]='';
  memset(entity_1, 'S', 46-1);
  entity_1[46-1]='';
  memcpy(entity_6, entity_1, 46*sizeof(char));
}