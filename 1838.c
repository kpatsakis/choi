void fun()
{
  char entity_5[48] = "";
  entity_5 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(24*sizeof(char));
  entity_2[24-1]='';
  memset(entity_5, 'r', 48-1);
  entity_5[48-1]='';
  memcpy(entity_2, entity_5, 48*sizeof(char));
}