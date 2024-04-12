void fun()
{
  int entity_6 = 62;
  char entity_4[61] = "";
  entity_4 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(30*sizeof(char));
  entity_3[30-1]='';
  memset(entity_4, 'v', 61-1);
  entity_4[61-1]='';
  memcpy(entity_3, entity_4, 61*sizeof(char));
}