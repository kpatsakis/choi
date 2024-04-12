void fun()
{
  char* entity_4;
  char entity_2[44] = "";
  entity_2 = NULL;
  entity_4 = (char*)malloc(69*sizeof(char));
  entity_4[69-1]='';
  memset(entity_2, 'j', 44-1);
  entity_2[44-1]='';
  memcpy(entity_4, entity_2, 44*sizeof(char));
}