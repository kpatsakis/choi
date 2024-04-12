void fun()
{
  char entity_8[3] = "";
  entity_8 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(85*sizeof(char));
  entity_6[85-1]='';
  memset(entity_8, 'e', 3-1);
  entity_8[3-1]='';
  memcpy(entity_6, entity_8, 3*sizeof(char));
}