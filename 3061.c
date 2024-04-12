void fun()
{
  char entity_0 = 'b';
  char* entity_7;
  char entity_5[58] = "";
  entity_5 = NULL;
  entity_7 = (char*)malloc(3*sizeof(char));
  entity_7[3-1]='';
  memset(entity_5, 'x', 58-1);
  entity_5[58-1]='';
  memcpy(entity_7, entity_5, 58*sizeof(char));
}