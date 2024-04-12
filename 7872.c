void fun()
{
  char entity_8[30] = "";
  entity_8 = NULL;
  char entity_0 = 'Z';
  char entity_5 = 'i';
  char entity_6 = 'P';
  char* entity_4;
  memset(entity_8, 'A', 30-1);
  entity_8[30-1]='';
  entity_4 = (char*)malloc(62*sizeof(char));
  entity_4[62-1]='';
  memcpy(entity_4, entity_8, 30*sizeof(char));
}