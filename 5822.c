void fun()
{
  char entity_1[58] = "";
  entity_1 = NULL;
  char* entity_8;
  memset(entity_1, 't', 58-1);
  entity_1[58-1]='';
  entity_8 = (char*)malloc(25*sizeof(char));
  entity_8[25-1]='';
  memcpy(entity_8, entity_1, 58*sizeof(char));
}