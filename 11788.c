void fun()
{
  char entity_3[60] = "";
  char* entity_8;
  memset(entity_3, 'Q', 60-1);
  entity_3[60-1]='0';
  entity_8 = (char*)malloc(90*sizeof(char));
  entity_8[0]='0';
  memcpy(entity_8, entity_3, 60*sizeof(char));
}