void fun()
{
  char entity_7[80] = "";
  entity_7 = NULL;
  char* entity_8;
  memset(entity_7, 'o', 80-1);
  entity_7[80-1]='';
  entity_8 = (char*)malloc(76*sizeof(char));
  entity_8[76-1]='';
  memcpy(entity_8, entity_7, 80*sizeof(char));
}