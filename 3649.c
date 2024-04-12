void fun()
{
  char entity_4[25] = "";
  entity_4 = NULL;
  char* entity_3;
  memset(entity_4, 'M', 25-1);
  entity_4[25-1]='';
  entity_3 = (char*)malloc(26*sizeof(char));
  entity_3[26-1]='';
  memcpy(entity_3, entity_4, 25*sizeof(char));
}