void fun()
{
  char* entity_3;
  char entity_8[30] = "";
  entity_8 = NULL;
  entity_3 = (char*)malloc(74*sizeof(char));
  entity_3[74-1]='';
  memset(entity_8, 'i', 30-1);
  entity_8[30-1]='';
  memcpy(entity_3, entity_8, 30*sizeof(char));
}