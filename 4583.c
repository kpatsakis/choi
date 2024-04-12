void fun()
{
  char entity_7[80] = "";
  entity_7 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(98*sizeof(char));
  entity_0[98-1]='';
  memset(entity_7, 'Y', 80-1);
  entity_7[80-1]='';
  memcpy(entity_0, entity_7, 80*sizeof(char));
}