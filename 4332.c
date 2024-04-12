void fun()
{
  char entity_4[43] = "";
  entity_4 = NULL;
  char* entity_1;
  memset(entity_4, 'l', 43-1);
  entity_4[43-1]='';
  entity_1 = (char*)malloc(87*sizeof(char));
  entity_1[87-1]='';
  memcpy(entity_1, entity_4, 43*sizeof(char));
}