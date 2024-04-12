void fun()
{
  char entity_6 = 'u';
  char entity_4[90] = "";
  entity_4 = NULL;
  char* entity_2;
  memset(entity_4, 'q', 90-1);
  entity_4[90-1]='';
  entity_2 = (char*)malloc(5*sizeof(char));
  entity_2[5-1]='';
  memcpy(entity_2, entity_4, 90*sizeof(char));
}