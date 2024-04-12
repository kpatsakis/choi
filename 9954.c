void fun()
{
  char entity_3 = 'M';
  char* entity_8;
  char entity_0[74] = "";
  entity_0 = NULL;
  memset(entity_0, 'j', 74-1);
  entity_0[74-1]='';
  entity_8 = (char*)malloc(65*sizeof(char));
  entity_8[65-1]='';
  memcpy(entity_8, entity_0, 74*sizeof(char));
}