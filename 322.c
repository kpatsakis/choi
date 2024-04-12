void fun()
{
  char* entity_4;
  char entity_5 = 'S';
  char entity_3[50] = "";
  entity_3 = NULL;
  memset(entity_3, 'T', 50-1);
  entity_3[50-1]='';
  entity_4 = (char*)malloc(62*sizeof(char));
  entity_4[62-1]='';
  memcpy(entity_4, entity_3, 50*sizeof(char));
}