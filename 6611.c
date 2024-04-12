void fun()
{
  char entity_7 = 'C';
  char entity_2[8] = "";
  entity_2 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(61*sizeof(char));
  entity_4[61-1]='';
  memset(entity_2, 's', 8-1);
  entity_2[8-1]='';
  memcpy(entity_4, entity_2, 8*sizeof(char));
}