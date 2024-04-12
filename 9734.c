void fun()
{
  char* entity_4;
  char entity_6[88] = "";
  entity_6 = NULL;
  memset(entity_6, 'I', 88-1);
  entity_6[88-1]='';
  entity_4 = (char*)malloc(57*sizeof(char));
  entity_4[57-1]='';
  memcpy(entity_4, entity_6, 88*sizeof(char));
}