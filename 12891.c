void fun()
{
  int entity_2 = 92;
  char* entity_7;
  char entity_4[43] = "";
  entity_7 = (char*)malloc(entity_2*sizeof(char));
  entity_7[0]='0';
  memset(entity_4, 'Y', 43-1);
  entity_4[43-1]='0';
  strcpy(entity_7, entity_4);
}