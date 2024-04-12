void fun()
{
  char entity_5[3] = "";
  entity_5 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(2*sizeof(char));
  entity_6[2-1]='';
  memset(entity_5, 'a', 3-1);
  entity_5[3-1]='';
  memcpy(entity_6, entity_5, 3*sizeof(char));
}