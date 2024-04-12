void fun()
{
  int entity_4 = 72;
  char* entity_8;
  char entity_5 = 'q';
  char entity_3[56] = "";
  entity_3 = NULL;
  entity_8 = (char*)malloc(85*sizeof(char));
  entity_8[85-1]='';
  memset(entity_3, 'u', 56-1);
  entity_3[56-1]='';
  memcpy(entity_8, entity_3, 56*sizeof(char));
}