void fun()
{
  char entity_6[83] = "";
  entity_6 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(9*sizeof(char));
  entity_2[9-1]='';
  memset(entity_6, 'V', 83-1);
  entity_6[83-1]='';
  memcpy(entity_2, entity_6, 83*sizeof(char));
}