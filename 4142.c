void fun()
{
  char entity_7[63] = "";
  entity_7 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(61*sizeof(char));
  entity_0[61-1]='';
  memset(entity_7, 'F', 63-1);
  entity_7[63-1]='';
  memcpy(entity_0, entity_7, 63*sizeof(char));
}