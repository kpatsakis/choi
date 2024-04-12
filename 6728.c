void fun()
{
  char* entity_4;
  char entity_3[17] = "";
  entity_3 = NULL;
  memset(entity_3, 'e', 17-1);
  entity_3[17-1]='';
  entity_4 = (char*)malloc(43*sizeof(char));
  entity_4[43-1]='';
  memcpy(entity_4, entity_3, 17*sizeof(char));
}