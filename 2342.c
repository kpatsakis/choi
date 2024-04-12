void fun()
{
  int entity_2 = 54;
  char entity_6[61] = "";
  entity_6 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(85*sizeof(char));
  entity_7[85-1]='';
  memset(entity_6, 'Q', 61-1);
  entity_6[61-1]='';
  memcpy(entity_7, entity_6, 61*sizeof(char));
}