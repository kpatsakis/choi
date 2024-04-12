void fun()
{
  char entity_8[61] = "";
  entity_8 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(28*sizeof(char));
  entity_7[28-1]='';
  memset(entity_8, 'C', 61-1);
  entity_8[61-1]='';
  memcpy(entity_7, entity_8, 61*sizeof(char));
}