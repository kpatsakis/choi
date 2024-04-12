void fun()
{
  char* entity_4;
  char entity_5[17] = "";
  entity_5 = NULL;
  memset(entity_5, 'w', 17-1);
  entity_5[17-1]='';
  entity_4 = (char*)malloc(79*sizeof(char));
  entity_4[79-1]='';
  memcpy(entity_4, entity_5, 17*sizeof(char));
}