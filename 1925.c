void fun()
{
  char entity_2[71] = "";
  entity_2 = NULL;
  char* entity_4;
  memset(entity_2, 'e', 71-1);
  entity_2[71-1]='';
  entity_4 = (char*)malloc(87*sizeof(char));
  entity_4[87-1]='';
  memcpy(entity_4, entity_2, 71*sizeof(char));
}