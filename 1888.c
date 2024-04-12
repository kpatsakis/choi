void fun()
{
  int entity_7 = 1;
  char* entity_5;
  char entity_0[38] = "";
  entity_0 = NULL;
  char entity_4 = 'M';
  memset(entity_0, 'H', 38-1);
  entity_0[38-1]='';
  entity_5 = (char*)malloc(2*sizeof(char));
  entity_5[2-1]='';
  memcpy(entity_5, entity_0, 38*sizeof(char));
}