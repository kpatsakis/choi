void fun()
{
  char* entity_7;
  char entity_2[54] = "";
  entity_2 = NULL;
  char entity_4[24] = "";
  entity_4 = NULL;
  entity_7 = (char*)malloc(49*sizeof(char));
  entity_7[49-1]='';
  memset(entity_4, 'a', 24-1);
  entity_4[24-1]='';
  memset(entity_2, 'Q', 54-1);
  entity_2[54-1]='';
  memcpy(entity_7, entity_2, 54*sizeof(char));
}