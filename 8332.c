void fun()
{
  char entity_0 = 'X';
  char entity_4[43] = "";
  entity_4 = NULL;
  char* entity_3;
  char entity_2[79] = "";
  entity_2 = NULL;
  memset(entity_2, 'I', 79-1);
  entity_2[79-1]='';
  memset(entity_4, 'i', 43-1);
  entity_4[43-1]='';
  entity_3 = (char*)malloc(47*sizeof(char));
  entity_3[47-1]='';
  memcpy(entity_3, entity_4, 43*sizeof(char));
}